using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;


public class PlayerProfile : Profile {

	[SerializeField]private SpriteRenderer m_matchRenderer;
	[SerializeField]private GameObject m_NahButton;
	[SerializeField]private GameObject m_spawnScoreTextHere;
	[SerializeField]private GameObject m_plusPoint;
	[SerializeField]private GameObject m_minusPoint;

	[SerializeField]private BodyPartDisplay [] m_bodyPartDisplays;

	[SerializeField]private static BodyPart m_choice = null;

	[SerializeField]private GameObject m_spawnIndicator;
	private static bool skip = false;
	private IEnumerator m_burningRoutine;
	private static int ms_score = 0;
	private Text m_tipText;
	private static int ms_correctChoices = 0;
	private static int ms_incorrectChoices = 0;

	protected static PlayerProfile ms_instance;

    public static PlayerProfile GetPlayer()
    {
        return ms_instance;
    }


    void Awake(){
        DontDestroyOnLoad(this.gameObject);
		ms_instance = this;
	}

	public static int GetCorrectChoices(){
		return ms_correctChoices;
	}

	public static int GetIncorrectChoices(){
		return ms_incorrectChoices;
	}

	public static void SetChoice(BodyPart bp = null){
		if (bp == null) {
			skip = true;
			return;
		}
		m_choice = bp;
	}


	public override void ResetScore(){
		ms_score = 0;
	}

	public static int GetScore(){
		return ms_score;
	}

	public static bool Conflicts(BodyPart a, BodyPart b){
		if (a == null || b == null) {
			return false;
		}

		return ms_strongAgainst [a.GetElementType ()].Contains (b.GetElementType ()) || ms_strongAgainst [b.GetElementType ()].Contains (a.GetElementType ());
	}

    public int GetSameParts(Profile potentialMatch)
    {
        int sameParts = 0;
        for (int i = 0; i < BodyPart.ElementType.GetNames(typeof(BodyPart.ElementType)).Length; i++)
        {
            int newSameParts = Mathf.Min(GetPartsOfType((BodyPart.ElementType)i), potentialMatch.GetPartsOfType((BodyPart.ElementType)i));
            sameParts += newSameParts;

            if (newSameParts > 0)
            {
                DropTutorialText(BodyPart.GetElementTypeString((BodyPart.ElementType)i) + " loves other " + BodyPart.GetElementTypeString((BodyPart.ElementType)i), Color.green);
            }
        }
        return sameParts;
    }
    
    public int GetDifferentParts(Profile potentialMatch)
    {

        int differentParts = 0;
        //calculate num typematched parts (likelihood of unmatch)
        foreach (BodyPart.ElementType type in ms_strongAgainst.Keys)
        {
            foreach (BodyPart.ElementType strongAgainst in ms_strongAgainst[type])
            {
                int newDifferentParts = Mathf.Max(Mathf.Max(Mathf.Min(GetPartsOfType(type), potentialMatch.GetPartsOfType(strongAgainst)),
                                        Mathf.Min(potentialMatch.GetPartsOfType(strongAgainst), GetPartsOfType(type))),
                    Mathf.Max(Mathf.Min(potentialMatch.GetPartsOfType(type), GetPartsOfType(strongAgainst)),
                        Mathf.Min(GetPartsOfType(strongAgainst), potentialMatch.GetPartsOfType(type))));

                differentParts += newDifferentParts;

                if (newDifferentParts > 0)
                {
                    DropTutorialText(BodyPart.GetElementTypeString(type) + " hates " + BodyPart.GetElementTypeString(strongAgainst), Color.red);
                }
            }
        }

        return differentParts;
    }

	public bool CheckForMatch(Profile potentialMatch){
        //calculate num same parts (likelihood of match)
        int sameParts = GetSameParts(potentialMatch);


        int differentParts = GetDifferentParts(potentialMatch);
       
		ms_instance.m_tipText.text = "Matching Parts:" + sameParts + " Clashing Parts:" + differentParts;
		return sameParts >= differentParts;

	}

	public void DropTutorialText(string text, Color c){
		GameObject addPointsText = GameObject.Instantiate (ms_instance.m_plusPoint,ms_instance.m_spawnScoreTextHere.transform.position,ms_instance.m_spawnScoreTextHere.transform.rotation) as GameObject;
		Rigidbody2D rb = addPointsText.GetComponent<Rigidbody2D> ();
		rb.AddForce (new Vector2 (Random.Range (-100.0f, 100.0f), Random.Range (-100.0f, 100.0f)));
		rb.AddTorque (Random.Range (-10.0f, 10.0f));

		Text t = addPointsText.GetComponentInChildren<Text> ();

		t.color = c;
		t.text = text;
	}
    
	protected override void GenerateProfile(){
		m_typeScores = new int[BodyPart.ElementType.GetNames(typeof(BodyPart.ElementType)).Length];
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

        HashSet<BodyPart.ElementType> elements = new HashSet<BodyPart.ElementType>();

		while (frontier.Count > 0) {
			m_NahButton.SetActive(false);
			BodyPartSlot slot = frontier.Pop ();


			bool isHead = slot.GetBodyPartType () == BodyPartSlot.BodyPartType.Head;


			if (slot.m_depth > 5 && isHead == false) {
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

            if (slot.m_depth >= 1 && isHead == false && frontier.Count - elements.Count > Mathf.Max(PlayerPrefs.GetInt("Level", 0) / 3, 6))
            {
                m_NahButton.SetActive(true);
            }

            bool shouldContinue = false;

			foreach (BodyPartDisplay display in m_bodyPartDisplays) {
				BodyPart bp = null;
				if (parts.Count > 0) {
					bp = parts [Random.Range (0, parts.Count)].GetComponent<BodyPart> ();
				}
				if (bp == null) {
					display.Display (null,0,0);
					shouldContinue = true;
				} else {
					display.Display (bp.gameObject, bp.MinRotation (), bp.MaxRotation ());
				}
			}

			if (shouldContinue) {
				continue;
			}

			m_spawnIndicator.transform.position = slot.transform.position;
			m_choice = null;
			//TODO:Let the player choose one
			while (m_choice == null && !(skip == true && slot.GetBodyPartType () != BodyPartSlot.BodyPartType.Body)) {
				yield return new WaitForEndOfFrame();

			}
			if (skip == true) {
				skip = false;
				continue;
			}

			BodyPart.RemoveConflicts (m_choice);

			m_choice.transform.localScale *= .25f;

			//TODO:Add the choice to the body
			m_choice = slot.AddPart(m_choice,slot.m_parentPart);

            elements.Add(m_choice.GetElementType());


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

		Destroy (m_spawnIndicator);

		m_body.CalculateScore (ref m_typeScores);
		CacheIfMatchProfile ();

		m_body.transform.parent = this.transform;

		//TODO: go to the next scene
		Fader.Instance.FadeIn().LoadLevel( "PrototypeScene" ).FadeIn(3.0f).FadeOut(3.0f);
	}

	public void OnLevelWasLoaded(){
        if (SceneManager.GetActiveScene().name == "PrototypeScene")
        {
            ms_instance.m_spawnScoreTextHere = GameObject.Find("ScoreTextSpawnPoint");
            ms_instance.m_matchRenderer = GameObject.Find("match1").GetComponent<SpriteRenderer>();
            ms_instance.m_tipText = GameObject.Find("TipText").GetComponent<Text>();
        }
        else if (SceneManager.GetActiveScene().name == "MatchRejects")
        {
            ms_instance.m_spawnScoreTextHere = GameObject.Find("ScoreTextSpawnPoint");
            ms_instance.m_tipText = GameObject.Find("TipText").GetComponent<Text>();
        }
        else if (SceneManager.GetActiveScene().name == "Main Menu")
        {
            Destroy(this.gameObject);
        }

        this.ClearHighlighting();
    }

	public static void AddMatch(){
		GameObject addPointsText = GameObject.Instantiate (ms_instance.m_plusPoint,ms_instance.m_spawnScoreTextHere.transform.position,ms_instance.m_spawnScoreTextHere.transform.rotation) as GameObject;
		Rigidbody2D rb = addPointsText.GetComponent<Rigidbody2D> ();
		rb.AddForce (new Vector2 (Random.Range (-10.0f, 10.0f), Random.Range (-10.0f, 10.0f)));
		rb.AddTorque (Random.Range (-10.0f, 10.0f));

		Text scoreText = GameObject.Find ("CurrentScoreText").GetComponent<Text>() as Text;

		ms_score++;
		ms_correctChoices++;
		scoreText.text = "Score: "+ ms_score;

	}

	public static void RemoveMatch(){
		GameObject losePointsText = GameObject.Instantiate (ms_instance.m_minusPoint,ms_instance.m_spawnScoreTextHere.transform.position,ms_instance.m_spawnScoreTextHere.transform.rotation)  as GameObject;
		Rigidbody2D rb = losePointsText.GetComponent<Rigidbody2D> ();
		rb.AddForce (new Vector2 (Random.Range (-10.0f, 10.0f), Random.Range (-10.0f, 10.0f)));
		rb.AddTorque (Random.Range (-10.0f, 10.0f));

		Text scoreText = GameObject.Find("CurrentScoreText").GetComponent<Text>() as Text;

		ms_score--;
		ms_incorrectChoices++;
		scoreText.text = "Score: "+ ms_score;
	}
}
