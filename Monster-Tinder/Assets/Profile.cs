using UnityEngine;
using System.Collections.Generic;
using System.Collections;
using UnityEngine.UI;
using System.Linq;

public class Profile : MonoBehaviour {
	protected GameObject[] m_bodies;
	[SerializeField]protected BodyPart m_body;
	[SerializeField]protected GameObject m_bodySlot;

	[SerializeField]protected int [] m_typeScores;

	[SerializeField]private Text m_text;

	static protected Dictionary<BodyPart.ElementType,List<BodyPart.ElementType>> ms_strongAgainst;

	public static void HighLightMatchingParts(Profile a, Profile b){
		List<BodyPart> toHighlight = new List<BodyPart> ();

		List<BodyPart> aList = a.getAllBodyParts ();
		List<BodyPart> bList = b.getAllBodyParts ();
		toHighlight.AddRange (aList);
		toHighlight.AddRange (bList);


		foreach (BodyPart bp in aList) {
			if (ContainsConflict (bp, bList)) {
				toHighlight.Remove(bp);
			}
		}


		foreach (BodyPart bp in bList) {
			if (ContainsConflict (bp, aList)) {
				toHighlight.Remove (bp);
			}
		}

		a.StartCoroutine (a.HighLighBodyParts (toHighlight,Color.green));

	}

	public static void HighLightConflicts(Profile a, Profile b){
		List<BodyPart> toHighlight = new List<BodyPart> ();

		List<BodyPart> aList = a.getAllBodyParts ();
		List<BodyPart> bList = b.getAllBodyParts ();

		foreach (BodyPart bp in aList) {
			if (ContainsConflict (bp, bList)) {
				toHighlight.Add (bp);
			}
		}


		foreach (BodyPart bp in bList) {
			if (ContainsConflict (bp, aList)) {
				toHighlight.Add (bp);
			}
		}

		b.StartCoroutine (a.HighLighBodyParts (toHighlight,Color.red));

	}

	private IEnumerator HighLighBodyParts(List<BodyPart> toHighlight, Color c){
		Dictionary<SpriteRenderer,Color> highlightSprites = new Dictionary<SpriteRenderer, Color> ();
		foreach (BodyPart bp in toHighlight) {
			SpriteRenderer sr = bp.GetSpriteRenderer();
			if (!highlightSprites.ContainsKey (sr)) {
				highlightSprites.Add (sr, sr.color);
			}
		}


		float t = 0.0f;

		while (t < 1.0f) {
			t += Time.deltaTime;

			float g = 0.0f;
			//interpolate to green
			while (g < .1f) {
				t += Time.deltaTime;
				g += Time.deltaTime;
				foreach (SpriteRenderer key in highlightSprites.Keys) {
					key.color = Color.Lerp (highlightSprites [key],c, g / .1f);
				}
				yield return new WaitForEndOfFrame ();
			}


			//interpolate back to base
			g = 0.0f;
			//interpolate to green
			while (g < .1f) {
				t += Time.deltaTime;
				g += Time.deltaTime;
				foreach (SpriteRenderer key in highlightSprites.Keys) {
					key.color = Color.Lerp (c, highlightSprites [key], g / .1f);
				}
				yield return new WaitForEndOfFrame ();
			}

			yield return new WaitForEndOfFrame ();
		}

		foreach (SpriteRenderer key in highlightSprites.Keys) {
			key.color = highlightSprites [key];
		}
	}

	public static bool ContainsConflict(BodyPart part, List<BodyPart> bps){
		foreach (BodyPart bp in bps) {
			if (PlayerProfile.Conflicts (part, bp)) {
				return true;
			}
		}
		return false;
	}

	public List<BodyPart> getAllBodyParts(){
		List<BodyPart> bps = this.gameObject.GetComponentsInChildren<BodyPart> ().ToList();
		bps.Add (this.m_body);
		return bps;
	}

	// Use this for initialization
	void Start () {
		AssembleStrongAgainst ();
		if (m_bodies == null) {
			var bodies = Resources.LoadAll(BodyPartSlot.BodyPartType.Body.ToString(), typeof(GameObject)).Cast<GameObject>();

			List<GameObject> usableBodies = new List<GameObject> ();
			List<BodyPart.ElementType> usableElements = SessionManager.AvailableTypes ();

			foreach (GameObject body in bodies) {
				if (usableElements.Contains (body.GetComponent<BodyPart> ().GetElementType ())) {
					usableBodies.Add (body);
				}
			}

			m_bodies = usableBodies.ToArray ();
		}

		Debug.Log (m_bodies);

		GenerateProfile ();

		ResetScore ();
	}

	public virtual void ResetScore(){

	}

	// Update is called once per frame
	void Update () {

	}

	private IEnumerator GenerateProfileAfterPlayer(){
		yield return new WaitForSeconds (1.0f);
		GenerateProfile ();
	}

	protected virtual void AssembleStrongAgainst(){

		ms_strongAgainst = new Dictionary<BodyPart.ElementType, List<BodyPart.ElementType>> ();

		ms_strongAgainst.Add (BodyPart.ElementType.Fire, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Grass, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Ground, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Water, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Ghost, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Poison, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Dark, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Fairy, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Bug, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Steel, new List<BodyPart.ElementType> ());


		ms_strongAgainst [BodyPart.ElementType.Water].Add (BodyPart.ElementType.Fire);
		ms_strongAgainst [BodyPart.ElementType.Water].Add (BodyPart.ElementType.Ground);
		ms_strongAgainst [BodyPart.ElementType.Fire].Add (BodyPart.ElementType.Grass);
		ms_strongAgainst [BodyPart.ElementType.Grass].Add (BodyPart.ElementType.Water);
		ms_strongAgainst [BodyPart.ElementType.Ground].Add (BodyPart.ElementType.Fire);
		ms_strongAgainst [BodyPart.ElementType.Ground].Add (BodyPart.ElementType.Poison);
		ms_strongAgainst [BodyPart.ElementType.Poison].Add (BodyPart.ElementType.Ghost);
		ms_strongAgainst [BodyPart.ElementType.Poison].Add (BodyPart.ElementType.Fairy);
		ms_strongAgainst [BodyPart.ElementType.Dark].Add (BodyPart.ElementType.Ghost);
		ms_strongAgainst [BodyPart.ElementType.Fairy].Add (BodyPart.ElementType.Dark);
		ms_strongAgainst [BodyPart.ElementType.Bug].Add (BodyPart.ElementType.Grass);
		ms_strongAgainst [BodyPart.ElementType.Bug].Add (BodyPart.ElementType.Dark);
		ms_strongAgainst [BodyPart.ElementType.Fire].Add (BodyPart.ElementType.Bug);
		ms_strongAgainst [BodyPart.ElementType.Steel].Add (BodyPart.ElementType.Fairy);
		ms_strongAgainst [BodyPart.ElementType.Ground].Add (BodyPart.ElementType.Steel);
		ms_strongAgainst [BodyPart.ElementType.Fire].Add (BodyPart.ElementType.Steel);
	}

	public int GetPartsOfType(BodyPart.ElementType type){
		return m_typeScores [(int)type];
	}

	protected virtual void GenerateProfile(){
		m_typeScores = new int[(int)BodyPart.ElementType.zCount];
		//Pick a starting body




		BodyPart body = (GameObject.Instantiate(m_bodies[Random.Range(0,m_bodies.Length)],m_bodySlot.transform.position,m_bodySlot.transform.rotation) as GameObject).GetComponent(typeof(BodyPart)) as BodyPart;
		body.transform.localScale = new Vector3 (.1f, .1f, .01f);
		body.transform.parent = this.transform;
		//fill out limbs
		body.InitAndGenerateBody();
		body.CalculateScore (ref m_typeScores);
		CacheIfMatchProfile ();
		m_body = body;
	}		

	protected virtual void CacheIfMatchProfile(){
	}
}
