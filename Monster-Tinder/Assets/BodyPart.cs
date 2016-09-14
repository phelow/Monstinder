using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class BodyPart : MonoBehaviour {

	//TODO: refactor into two dictionaries of lists, this is rediculous
	//TODO: add other bodyparts
	private BodyPartSlot [] slots;
	private static Dictionary<BodyPartSlot.BodyPartType, List<GameObject>> bodyParts;

	public BoxCollider2D m_collider;

	private static Dictionary<BodyPartSlot.BodyPartType, List<GameObject>> usableBodyParts; //TODO: mae

	[SerializeField]private List<BodyPart> theseBodyParts; //todo name
	[SerializeField]private ElementType m_type;
	[SerializeField]private float m_minRotation = -30;
	[SerializeField]private float m_maxRotation = 30;


	[SerializeField]private BodyPartSlot.BodyPartType m_bodyType;

	public enum ElementType{
		Fire,
		Water,
		Grass,
		Ground,
		Ghost,
		Poison,
		Dark,
		Fairy,
		Count
	}

	public enum Orientation{
		Left,
		Right,
		Neutral
	}

	public void InitAndGenerateBody(){
		Init ();
		GenerateBody ();
	}

	// Use this for initialization
	void Init () {

		slots = this.GetComponentsInChildren<BodyPartSlot> ();

		if (bodyParts == null) {
			bodyParts = new Dictionary<BodyPartSlot.BodyPartType, List<GameObject>> ();
			for (int i = 0; i <=  (int)BodyPartSlot.BodyPartType.Body; i++) {
				bodyParts [(BodyPartSlot.BodyPartType)i] = Resources.LoadAll (((BodyPartSlot.BodyPartType)i).ToString(), typeof(GameObject)).Cast<GameObject>().ToList();
			}
		}
		usableBodyParts = new Dictionary<BodyPartSlot.BodyPartType, List<GameObject>> ();

		for (int i = 0; i <= (int)BodyPartSlot.BodyPartType.Body; i++) {
			usableBodyParts.Add((BodyPartSlot.BodyPartType)i,new List<GameObject>(bodyParts [(BodyPartSlot.BodyPartType)i]));
		}
	}

	public BodyPartSlot.BodyPartType GetBodyPartType(){
		return m_bodyType;
	}

	public ElementType GetElementType(){
		return m_type;
	}
		
	public IEnumerator GenerateBodyCoroutine(Orientation orientation = Orientation.Neutral){

		BodyPart.RemoveConflicts (this);
		if (orientation == Orientation.Neutral) {
			switch (this.GetBodyPartType ()) {
			case BodyPartSlot.BodyPartType.LeftArm:
				orientation = Orientation.Left;
				break;
			case BodyPartSlot.BodyPartType.LeftEar:
				orientation = Orientation.Left;
				break;
			case BodyPartSlot.BodyPartType.LeftLeg:
				orientation = Orientation.Left;
				break;
			case BodyPartSlot.BodyPartType.RightArm:
				orientation = Orientation.Right;
				break;
			case BodyPartSlot.BodyPartType.RightEar:
				orientation = Orientation.Right;
				break;
			case BodyPartSlot.BodyPartType.RightLeg:
				orientation = Orientation.Right;
				break;
			}
		}

		transform.localScale = new Vector3 (1.0f, 1.0f, .1f);
		slots = this.GetComponentsInChildren<BodyPartSlot> ();

		if (slots == null) {
			return false;
		}

		foreach (BodyPartSlot slot in slots) {
			BodyPartSlot.BodyPartType bodyPartSlotType = slot.GetBodyPartType ();
			if (orientation == Orientation.Left && (bodyPartSlotType == BodyPartSlot.BodyPartType.RightEar || bodyPartSlotType == BodyPartSlot.BodyPartType.RightLeg || bodyPartSlotType == BodyPartSlot.BodyPartType.RightArm)) {
				continue;
			}
			else if (orientation == Orientation.Right && (bodyPartSlotType == BodyPartSlot.BodyPartType.LeftEar || bodyPartSlotType == BodyPartSlot.BodyPartType.LeftLeg || bodyPartSlotType == BodyPartSlot.BodyPartType.LeftArm)) {
				continue;
			}


			bool c = false;
			foreach (BodyPart bp in theseBodyParts) {
				BoxCollider2D bc = bp.GetComponentInChildren<BoxCollider2D> ();

				if (bc == null) {
					bc = bp.GetComponent<BoxCollider2D> ();
				}

				if (bc == null) {
					continue;
				}

				if (bc.bounds.Intersects (new Bounds(new Vector3(slot.transform.position.x,slot.transform.position.y,bc.bounds.center.z),Vector3.one * .1f) ) ) {
					c = true;
				}
			}

			if(c && slot.GetBodyPartType() != BodyPartSlot.BodyPartType.Head){
				continue;
			}

			BodyPartSlot.BodyPartType bodyPartSlot = slot.GetBodyPartType ();

			List<GameObject> parts = usableBodyParts [bodyPartSlot];

			if (bodyPartSlot == BodyPartSlot.BodyPartType.LeftArm || bodyPartSlot == BodyPartSlot.BodyPartType.RightArm) {
				parts.AddRange (usableBodyParts [BodyPartSlot.BodyPartType.Arm]);
			} else if (bodyPartSlot == BodyPartSlot.BodyPartType.LeftLeg || bodyPartSlot == BodyPartSlot.BodyPartType.RightLeg) {
				parts.AddRange (usableBodyParts [BodyPartSlot.BodyPartType.Leg]);
			} else if (bodyPartSlot == BodyPartSlot.BodyPartType.LeftEar || bodyPartSlot == BodyPartSlot.BodyPartType.RightEar) {
				parts.AddRange (usableBodyParts [BodyPartSlot.BodyPartType.Ear]);
			}
			Debug.Log (this.m_bodyType);
			if (parts == null) {
				return false;
			}

			//TODO: remove from parts all parts that cause a weakness
			int partCount = parts.Count;
			Debug.Log(this.m_bodyType + " " + partCount);

			if (partCount == 0) {
				continue;
			}

			BodyPart part = (GameObject.Instantiate(parts[Random.Range(0,partCount)],slot.transform.position + slot.transform.forward * -1,slot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
			part.transform.Rotate (new Vector3 (0, 0, Random.Range (m_minRotation, m_maxRotation)));


			part.transform.parent = this.transform;

			//if the slot is within a trigger do not create a new gameobjec
			part.GenerateBody (orientation);
			yield return new WaitForEndOfFrame ();

			theseBodyParts.Add (part);
		}
	}


	public void GenerateBody(Orientation orientation = Orientation.Neutral ){
		this.StartCoroutine (this.GenerateBodyCoroutine (orientation));
	}

	public static void RemoveConflicts(BodyPart part){
		List<GameObject> toRemove;

		foreach (BodyPartSlot.BodyPartType key in usableBodyParts.Keys) {
			toRemove = new List<GameObject> ();
			foreach (GameObject go in usableBodyParts[key]) {
				if (PlayerProfile.Conflicts (part, go.GetComponent<BodyPart> ())) {
					toRemove.Add (go);
				}
			}

			foreach (GameObject go in toRemove) {
				usableBodyParts [key].Remove (go);
			}
		}
	}

	public void CalculateScore (ref  int [] typeScores){
		typeScores [(int)m_type]++;
		foreach (BodyPart part in theseBodyParts) {
			part.CalculateScore (ref typeScores);
		}
	}

	// Update is called once per frame
	void Update () {
	
	}
}
