using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class BodyPart : MonoBehaviour {
	//TODO: add other bodyparts
	[SerializeField]private GameObject [] armSlots;
	[SerializeField]private GameObject [] arms;
	[SerializeField]private List<BodyPart> bodyparts;
	[SerializeField]private Type m_type;

	public enum Type{
		Fire,
		Water,
		Count
	}
	// Use this for initialization
	void Start () {
	
	}

	public void GenerateBody(){
		foreach (GameObject armslot in armSlots) {
			BodyPart arm = (GameObject.Instantiate(arms[Random.Range(0,arms.Length)],armslot.transform.position,armslot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
			arm.transform.parent = this.transform;
			arm.GenerateBody ();

			bodyparts.Add (arm);
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
