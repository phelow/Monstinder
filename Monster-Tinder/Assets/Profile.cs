using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;
using System.Linq;

public class Profile : MonoBehaviour {
	private GameObject[] m_bodies;
	[SerializeField]private GameObject m_bodySlot;

	[SerializeField]protected int [] m_typeScores;

	[SerializeField]private Text m_text;

	static protected Dictionary<BodyPart.Type,List<BodyPart.Type>> ms_strongAgainst;

	// Use this for initialization
	void Start () {
		AssembleStrongAgainst ();
		if (m_bodies == null) {
			var bodies = Resources.LoadAll("bodies", typeof(GameObject)).Cast<GameObject>();

			m_bodies = bodies.ToArray ();
		}

		Debug.Log (m_bodies);

		GenerateProfile ();
	}
	
	// Update is called once per frame
	void Update () {

	}

	protected virtual void AssembleStrongAgainst(){

		ms_strongAgainst = new Dictionary<BodyPart.Type, List<BodyPart.Type>> ();

		ms_strongAgainst.Add (BodyPart.Type.Fire, new List<BodyPart.Type> ());

		ms_strongAgainst.Add (BodyPart.Type.Water, new List<BodyPart.Type> ());
		ms_strongAgainst [BodyPart.Type.Water].Add (BodyPart.Type.Fire);
	}

	public int GetPartsOfType(BodyPart.Type type){
		return m_typeScores [(int)type];
	}

	void GenerateProfile(){
		m_typeScores = new int[(int)BodyPart.Type.Count];
		//Pick a starting body

		BodyPart body = (GameObject.Instantiate(m_bodies[Random.Range(0,m_bodies.Length)],m_bodySlot.transform.position,m_bodySlot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
		body.transform.parent = this.transform;
		//fill out limbs
		body.InitAndGenerateBody();
		body.CalculateScore (ref m_typeScores);
		CacheIfMatchProfile ();
	}		

	protected virtual void CacheIfMatchProfile(){
	}
}
