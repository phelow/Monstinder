using UnityEngine;
using System.Collections;

public class BodyPartSlot : MonoBehaviour {

	[SerializeField]private BodyPartSlot.BodyPartType m_slotType;

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

	public BodyPart AddPart(BodyPart bp, float minRotation, float maxRotation){

		BodyPart part = (GameObject.Instantiate (bp.gameObject, this.transform.position, this.transform.rotation) as GameObject).GetComponent (typeof(BodyPart)) as BodyPart;
		part.transform.Rotate (new Vector3 (0, 0, Random.Range (minRotation, maxRotation)));
		part.transform.parent = this.transform;

		return part;
	}
}
