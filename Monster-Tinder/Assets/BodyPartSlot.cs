using UnityEngine;
using System.Collections;

public class BodyPartSlot : MonoBehaviour {

	[SerializeField]private BodyPartSlot.BodyPartType m_slotType;
	public BodyPart m_parentPart;
	public int m_depth;

	public enum BodyPartType{
		Arm,
		RightArm,
		LeftArm,
		Ear,
		RightEar,
		LeftEar,
		Leg,
		RightLeg,
		LeftLeg,
		Head,
		Body
	}

	public BodyPartSlot.BodyPartType GetBodyPartType(){
		return m_slotType;
	}

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public BodyPart AddPart(BodyPart bp, BodyPart parentPart){
		BodyPart part = (GameObject.Instantiate (bp.gameObject, this.transform.position, bp.transform.localRotation) as GameObject).GetComponent (typeof(BodyPart)) as BodyPart;

		if (parentPart != null) {
			parentPart.AddChildPart (part);
		}

		part.transform.parent = this.transform;
		part.transform.localScale = part.transform.localScale * 4.0f;


		return part;
	}
}
