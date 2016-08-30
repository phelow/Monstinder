using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System.Linq;

public class Profile : MonoBehaviour {
	private GameObject[] m_bodies;
	[SerializeField]private GameObject m_bodySlot;

	[SerializeField]protected int [] m_typeScores;

	[SerializeField]private Text m_text;

	// Use this for initialization
	void Start () {
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


	public virtual void CacheIfMatchProfile(){
	}
		
}
