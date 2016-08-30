using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Linq;

public class BodyPart : MonoBehaviour {

	//TODO: refactor into two dictionaries of lists, this is rediculous
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


	private static List<GameObject> usableArms;
	private static List<GameObject> usableRightArms;
	private static List<GameObject> usableLeftArms;
	private static List<GameObject> usableLegs;
	private static List<GameObject> usableRightLegs;
	private static List<GameObject> usableLeftLegs;
	private static List<GameObject> usableEars;
	private static List<GameObject> usableRightEars;
	private static List<GameObject> usableLeftEars;
	private static List<GameObject> usableHeads;

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
		BodyPart.RemoveConflicts (this);
		this.GenerateBody ();
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

		usableArms = new List<GameObject>(arms);
		usableRightArms = new List<GameObject>(rightArms);
		usableLeftArms = new List<GameObject>(leftArms);
		usableLegs = new List<GameObject>(legs);
		usableRightLegs = new List<GameObject>(rightLegs);
		usableLeftLegs = new List<GameObject>(leftLegs);
		usableEars = new List<GameObject>(ears);
		usableRightEars = new List<GameObject>(rightEars);
		usableLeftEars = new List<GameObject>(leftEars);
		usableHeads = new List<GameObject>(heads);

	}

	public BodyPartSlot.BodyPartType GetBodyPartType(){
		return m_bodyType;
	}

	public Type GetElementType(){
		return m_type;
	}

	private void GenerateBody( ){
		foreach (BodyPartSlot slot in slots) {
			List<GameObject> parts = null;

			switch (slot.GetBodyPartType()) {
			case BodyPartSlot.BodyPartType.Arm:
				parts = usableArms;
				break;
			case BodyPartSlot.BodyPartType.RightArm:
				parts = usableRightArms;
				break;
			case BodyPartSlot.BodyPartType.LeftArm:
				parts = usableLeftArms;
				break;
			case BodyPartSlot.BodyPartType.Ear:
				parts = usableEars;
				break;
			case BodyPartSlot.BodyPartType.RightEar:
				parts = usableRightEars;
				break;
			case BodyPartSlot.BodyPartType.LeftEar:
				parts = usableLeftEars;
				break;
			case BodyPartSlot.BodyPartType.Leg:
				parts = usableLegs;
				break;
			case BodyPartSlot.BodyPartType.RightLeg:
				parts = usableRightLegs;
				break;
			case BodyPartSlot.BodyPartType.LeftLeg:
				parts = usableLeftLegs;
				break;
			case BodyPartSlot.BodyPartType.Head:
				parts = usableHeads;
				break;
			}
				

			if (parts == null) {
				return;
			}

			//TODO: remove from parts all parts that cause a weakness

			int partCount = parts.Count;

			if (partCount == 0) {
				continue;
			}

			BodyPart part = (GameObject.Instantiate(parts[Random.Range(0,partCount)],slot.transform.position,slot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
			this.RemoveConflicts (part);

			part.transform.parent = this.transform;
			part.InitAndGenerateBody ();

			bodyparts.Add (part);
		}
	}

	public static void RemoveConflicts(BodyPart part){
		List<GameObject> toRemove;

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableArms){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}
		foreach (GameObject go in toRemove) {
			usableArms.Remove (go);
		}


		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableRightArms){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}
		foreach (GameObject go in toRemove) {
			usableRightArms.Remove (go);
		}


		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableLeftArms){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableLeftArms.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableEars){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableEars.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableRightEars){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableRightEars.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableLeftEars){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableLeftEars.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableRightEars){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableRightEars.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableLegs){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableLegs.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableLeftLegs){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}

		foreach (GameObject go in toRemove) {
			usableLeftLegs.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableRightLegs){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}
		foreach (GameObject go in toRemove) {
			usableRightLegs.Remove (go);
		}

		toRemove = new List<GameObject> ();
		foreach(GameObject p in usableHeads){
			if (PlayerProfile.Conflicts (p.GetComponent<BodyPart> (), part)) {
				toRemove.Add(p);
			}
		}
		foreach (GameObject go in toRemove) {
			usableHeads.Remove (go);
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
