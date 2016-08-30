using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class BodyPart : MonoBehaviour {
	//TODO: add other bodyparts
	private BodyPartSlot [] slots;
	private static List<GameObject> arms;
	private static List<GameObject> rightArms;
	private static List<GameObject> leftArms;
	private static List<GameObject> legs;
	private static List<GameObject> rightLegs;
	private static List<GameObject> leftLegs;
	private static List<GameObject> ears;
	private static List<GameObject> rightEars;
	private static List<GameObject> leftEars;
	private static List<GameObject> heads;

	[SerializeField]private List<BodyPart> bodyparts;
	[SerializeField]private Type m_type;

	[SerializeField]private BodyPartSlot.BodyPartType m_bodyType;

	public enum Type{
		Fire,
		Water,
		Count
	}

	public void InitAndGenerateBody(){
		this.Init ();
		this.GenerateBody ();
	}

	void Start(){
		if (slots != null) {
			return;
		}

		InitAndGenerateBody ();
	}

	// Use this for initialization
	void Init () {
		slots = this.GetComponentsInChildren<BodyPartSlot> ();
		if (arms == null) {
			arms = Resources.LoadAll("arms", typeof(GameObject)).Cast<GameObject>().ToList();
			rightArms = Resources.LoadAll("rightArms", typeof(GameObject)).Cast<GameObject>().ToList();
			leftArms = Resources.LoadAll("leftArms", typeof(GameObject)).Cast<GameObject>().ToList();
			heads = Resources.LoadAll("heads", typeof(GameObject)).Cast<GameObject>().ToList();

			legs = Resources.LoadAll("legs", typeof(GameObject)).Cast<GameObject>().ToList();
			rightLegs = Resources.LoadAll("rightLegs", typeof(GameObject)).Cast<GameObject>().ToList();
			leftLegs = Resources.LoadAll("leftLegs", typeof(GameObject)).Cast<GameObject>().ToList();

			ears = Resources.LoadAll("ears", typeof(GameObject)).Cast<GameObject>().ToList();
			leftEars = Resources.LoadAll("leftEars", typeof(GameObject)).Cast<GameObject>().ToList();
			rightEars = Resources.LoadAll("rightEars", typeof(GameObject)).Cast<GameObject>().ToList();
		}
	}

	public BodyPartSlot.BodyPartType GetBodyPartType(){
		return m_bodyType;
	}

	private void GenerateBody(){
		foreach (BodyPartSlot slot in slots) {
			List<GameObject> parts = null;

			switch (slot.GetBodyPartType()) {
			case BodyPartSlot.BodyPartType.Arm:
				parts = arms;
				break;
			case BodyPartSlot.BodyPartType.RightArm:
				parts = rightArms;
				break;
			case BodyPartSlot.BodyPartType.LeftArm:
				parts = leftArms;
				break;
			case BodyPartSlot.BodyPartType.Ear:
				parts = ears;
				break;
			case BodyPartSlot.BodyPartType.RightEar:
				parts = rightEars;
				break;
			case BodyPartSlot.BodyPartType.LeftEar:
				parts = leftEars;
				break;
			case BodyPartSlot.BodyPartType.Leg:
				parts = legs;
				break;
			case BodyPartSlot.BodyPartType.RightLeg:
				parts = rightLegs;
				break;
			case BodyPartSlot.BodyPartType.LeftLeg:
				parts = leftLegs;
				break;
			}
				

			if (parts == null) {
				return;
			}

			int partCount = parts.Count;

			BodyPart part = (GameObject.Instantiate(parts[Random.Range(0,partCount)],slot.transform.position,slot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
			part.transform.parent = this.transform;
			part.InitAndGenerateBody ();

			bodyparts.Add (part);
		}
	}

	public void CalculateScore (ref  int [] typeScores){
		typeScores [(int)m_type]++;
		foreach (BodyPart part in bodyparts) {
			part.CalculateScore (ref typeScores);
		}
	}

	// Update is called once per frame
	void Update () {
	
	}
}
