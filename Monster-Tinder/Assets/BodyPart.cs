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

	private static Dictionary<BodyPartSlot.BodyPartType, List<GameObject>> usableBodyParts;

	[SerializeField]private List<BodyPart> theseBodyParts; //todo name
	[SerializeField]private ElementType m_type;

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

	public void GenerateBody( ){
		transform.localScale = new Vector3 (1.0f, 1.0f, .1f);
		slots = this.GetComponentsInChildren<BodyPartSlot> ();

		if (slots == null) {
			return;
		}

		foreach (BodyPartSlot slot in slots) {
			bool c = false;
			foreach (BodyPart bp in theseBodyParts) {
				BoxCollider2D bc = bp.GetComponentInChildren<BoxCollider2D> ();

				if (bc == null) {
					bc = bp.GetComponent<BoxCollider2D> ();
				}

				if (bc == null) {
					continue;
				}



				if (bc.bounds.Intersects (new Bounds(new Vector3(slot.transform.position.x,slot.transform.position.y,bc.bounds.center.z),Vector3.one * 0.2f) ) ) {
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
				return;
			}

			//TODO: remove from parts all parts that cause a weakness
			int partCount = parts.Count;
			Debug.Log(this.m_bodyType + " " + partCount);

			if (partCount == 0) {
				continue;
			}

			BodyPart part = (GameObject.Instantiate(parts[Random.Range(0,partCount)],slot.transform.position + slot.transform.forward * -1,slot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
			BodyPart.RemoveConflicts (part);

			part.transform.parent = this.transform;

			//if the slot is within a trigger do not create a new gameobjec
			part.GenerateBody ();

			theseBodyParts.Add (part);
		}
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
