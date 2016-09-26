using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class PlayerProfile : Profile {

	[SerializeField]private SpriteRenderer m_matchRenderer;

	[SerializeField]private Sprite m_match;

	[SerializeField]private Sprite m_litMatch;
	[SerializeField]private Sprite m_burntMatch;
	[SerializeField]private GameObject m_spawnScoreTextHere;
	[SerializeField]private GameObject m_plusPoint;
	[SerializeField]private GameObject m_minusPoint;

	[SerializeField]private BodyPartDisplay [] m_bodyPartDisplays;

	[SerializeField]private static BodyPart m_choice = null;

	private IEnumerator m_burningRoutine;
	private static int ms_score = 0;

	protected static PlayerProfile ms_instance;

	void Awake(){
		
		ms_instance = this;
	}

	public static void SetChoice(BodyPart bp){
		m_choice = bp;
	}


	public override void ResetScore(){
		ms_score = 0;
	}

	public static int GetScore(){
		return ms_score;
	}

	public static bool Conflicts(BodyPart a, BodyPart b){
		return ms_strongAgainst [a.GetElementType ()].Contains (b.GetElementType ()) || ms_strongAgainst [b.GetElementType ()].Contains (a.GetElementType ());
	}

	public bool CheckForMatch(Profile potentialMatch){
		//calculate num same parts (likelihood of match)
		int sameParts = 0;
		for (int i = 0; i < (int)BodyPart.ElementType.zCount; i++) {
			sameParts += Mathf.Min (GetPartsOfType ((BodyPart.ElementType)i), potentialMatch.GetPartsOfType ((BodyPart.ElementType)i));
		}


		int differentParts = 0;
		//calculate num typematched parts (likelihood of unmatch)
		foreach (BodyPart.ElementType type in ms_strongAgainst.Keys) {
			foreach (BodyPart.ElementType strongAgainst in ms_strongAgainst[type]) {
				differentParts +=  Mathf.Max(Mathf.Max(Mathf.Min (GetPartsOfType(type),potentialMatch.GetPartsOfType(strongAgainst)), 
										Mathf.Min (potentialMatch.GetPartsOfType(strongAgainst),GetPartsOfType(type))),
					Mathf.Max(Mathf.Min (potentialMatch.GetPartsOfType(type),GetPartsOfType(strongAgainst)), 
						Mathf.Min (GetPartsOfType(strongAgainst),potentialMatch.GetPartsOfType(type))));
			}
		}

		Debug.Log ("Same Parts:" + sameParts + " Different Prts:" + differentParts);

		return sameParts >= differentParts;

	}

	private IEnumerator Burn(){
		while (true) {
			m_matchRenderer.sprite = m_litMatch;
			yield return new WaitForSeconds (.1f);
			m_matchRenderer.sprite = m_match;
			yield return new WaitForSeconds (.1f);
		}
	}

	protected override void GenerateProfile(){
		m_typeScores = new int[(int)BodyPart.ElementType.zCount];
		//Pick a starting body




		//fill out limbs
		StartCoroutine(GeneratePlayerBody());
	}

	//TODO: force the player to pick more than one type
	//TODO: no duplicate choice
	private IEnumerator GeneratePlayerBody(){
		DontDestroyOnLoad (this.gameObject);
		BodyPart.Init ();
		Stack<BodyPartSlot> frontier = new Stack<BodyPartSlot>();
		m_bodySlot.GetComponent<BodyPartSlot> ().m_depth = 0;
		frontier.Push (m_bodySlot.GetComponent<BodyPartSlot>());
		while (frontier.Count > 0) {
			BodyPartSlot slot = frontier.Pop ();


			bool isHead = slot.GetBodyPartType () == BodyPartSlot.BodyPartType.Head;

			if (Random.Range (0, slot.m_depth) > Random.Range (2, 5) && isHead == false) {
				continue;
			}

			RaycastHit2D[] hits = Physics2D.CircleCastAll (new Vector2 (slot.transform.position.x, slot.transform.position.y),BodyPart.ms_placementTolerance, Vector2.zero);
			foreach (RaycastHit2D hit in hits) {
				Debug.Log (hit.collider.gameObject.transform.parent.name + " " + hit.centroid);
			}
			if (hits.Length > 0 || (hits.Length == 1 && ( hits[0].collider.gameObject == this.gameObject || hits[0].collider.gameObject.transform.parent == this.gameObject))) {
				continue;
			}


			BodyPartSlot.BodyPartType bodyPartSlotType = slot.GetBodyPartType ();
			//TODO:pick three bodyparts
			HashSet<BodyPart.ElementType> types = new HashSet<BodyPart.ElementType>();
			List<GameObject> parts;
			if (m_body == null) {
				parts = BodyPart.GetUsableParts (slot.GetBodyPartType (), true,null);

			} else {
				parts = BodyPart.GetUsableParts (slot.GetBodyPartType (), true, m_body.CountTypes (ref types));
			}
			foreach (BodyPartDisplay display in m_bodyPartDisplays) {
				display.Display (parts[Random.Range(0,parts.Count)]);
			}

			m_choice = null;
			//TODO:Let the player choose one
			while (m_choice == null) {
				yield return new WaitForEndOfFrame();

			}

			BodyPart.RemoveConflicts (m_choice);

			//TODO:Add the choice to the body
			m_choice = slot.AddPart(m_choice,m_choice.MinRotation(),m_choice.MaxRotation(),slot.m_parentPart);

			if (m_body == null) {
				m_body = m_choice;
			}

			foreach(BodyPartSlot s in m_choice.GetSlots()){
				s.m_parentPart = m_choice;
				s.m_depth = slot.m_depth + 1;
				frontier.Push(s);
			}

			yield return new WaitForEndOfFrame();
		}



		m_body.CalculateScore (ref m_typeScores);
		CacheIfMatchProfile ();

		m_body.transform.parent = this.transform;

		//TODO: go to the next scene
		Fader.Instance.FadeIn().LoadLevel( "PrototypeScene" ).FadeIn(3.0f).FadeOut(3.0f);
	}

	public void OnLevelWasLoaded(){
		if (SceneManager.GetActiveScene ().name == "PrototypeScene") {
			ms_instance.m_spawnScoreTextHere = GameObject.Find ("ScoreTextSpawnPoint");
			ms_instance.m_matchRenderer = GameObject.Find ("match1").GetComponent<SpriteRenderer> ();
		}
	}

	public static void AddMatch(){
		GameObject addPointsText = GameObject.Instantiate (ms_instance.m_plusPoint,ms_instance.m_spawnScoreTextHere.transform.position,ms_instance.m_spawnScoreTextHere.transform.rotation) as GameObject;
		Rigidbody2D rb = addPointsText.GetComponent<Rigidbody2D> ();
		rb.AddForce (new Vector2 (Random.Range (-10.0f, 10.0f), Random.Range (-10.0f, 10.0f)));
		rb.AddTorque (Random.Range (-10.0f, 10.0f));

		if (ms_instance.m_burningRoutine != null) {
			ms_instance.StopCoroutine (ms_instance.m_burningRoutine);
		}

		ms_instance.m_burningRoutine = ms_instance.Burn ();

		ms_instance.StartCoroutine (ms_instance.m_burningRoutine);

		Text scoreText = GameObject.FindWithTag ("ScoreText").GetComponent<Text>() as Text;

		ms_score++;
		scoreText.text = "Score: "+ ms_score;

	}
	public static void RemoveMatch(){
		GameObject losePointsText = GameObject.Instantiate (ms_instance.m_minusPoint,ms_instance.m_spawnScoreTextHere.transform.position,ms_instance.m_spawnScoreTextHere.transform.rotation)  as GameObject;
		Rigidbody2D rb = losePointsText.GetComponent<Rigidbody2D> ();
		rb.AddForce (new Vector2 (Random.Range (-10.0f, 10.0f), Random.Range (-10.0f, 10.0f)));
		rb.AddTorque (Random.Range (-10.0f, 10.0f));

		if (ms_instance.m_burningRoutine != null) {
			ms_instance.StopCoroutine (ms_instance.m_burningRoutine);
		}
		ms_instance.m_matchRenderer.sprite = ms_instance.m_burntMatch;
		Text scoreText = GameObject.FindWithTag ("ScoreText").GetComponent<Text>() as Text;

		ms_score--;
		scoreText.text = "Score: "+ ms_score;
	}
}
