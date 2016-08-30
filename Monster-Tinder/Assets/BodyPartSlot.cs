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
}
