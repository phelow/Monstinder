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
	public IEnumerator m_highlightBodyPartsCoroutine;
    private Dictionary<SpriteRenderer, Color> m_toHighlight;
    private Color m_highlightColor;

    [SerializeField]
    private Image m_polaroidGraphic;

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

        a.SetSpritesToHighlight(toHighlight);

        a.m_highlightColor = Color.green;
    }

    public void SetSpritesToHighlight(List<BodyPart> toHighlight)
    {
        this.m_toHighlight = new Dictionary<SpriteRenderer, Color>();

        foreach (BodyPart bp in toHighlight)
        {
            SpriteRenderer sr = bp.GetSpriteRenderer();
            if (!this.m_toHighlight.ContainsKey(sr))
            {
                this.m_toHighlight.Add(sr, bp.GetColor());
            }
        }

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
     
        a.SetSpritesToHighlight(toHighlight);
        a.m_highlightColor = Color.red;

    }

    public Image GetPolaroidGraphic()
    {
        return m_polaroidGraphic;
    }

    public void ClearHighlighting()
    {
        this.m_toHighlight = new Dictionary<SpriteRenderer, Color>();
        this.m_highlightColor = Color.white;
    }


    private IEnumerator HighLightBodyParts(){
        this.m_toHighlight = new Dictionary<SpriteRenderer, Color>();
        this.m_highlightColor = Color.white;


        while(true)
        {
            float g = 0.0f;
            //interpolate to green
            while (g < 1.0f)
            {
                g += Time.deltaTime;
                foreach (SpriteRenderer key in this.m_toHighlight.Keys)
                {
                    key.color = Color.Lerp(this.m_toHighlight[key], m_highlightColor, g);
                }
                yield return new WaitForEndOfFrame();
            }


            //interpolate back to base
            g = 0.0f;
            //interpolate to green
            while (g < 1.0f)
            {
                g += Time.deltaTime;
                foreach (SpriteRenderer key in this.m_toHighlight.Keys)
                {
                    key.color = Color.Lerp(m_highlightColor, this.m_toHighlight[key], g);
                }
                yield return new WaitForEndOfFrame();
            }
            yield return new WaitForSeconds(1.0f);
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

        StartCoroutine(HighLightBodyParts());
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
		ms_strongAgainst.Add (BodyPart.ElementType.Plant, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Earth, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Water, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Spirit, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Poison, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Dark, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Light, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Bug, new List<BodyPart.ElementType> ());
		ms_strongAgainst.Add (BodyPart.ElementType.Metal, new List<BodyPart.ElementType> ());
        ms_strongAgainst.Add(BodyPart.ElementType.Dragon, new List<BodyPart.ElementType>());
        ms_strongAgainst.Add(BodyPart.ElementType.Glitch, new List<BodyPart.ElementType>());


        ms_strongAgainst [BodyPart.ElementType.Water].Add (BodyPart.ElementType.Fire);
		ms_strongAgainst [BodyPart.ElementType.Water].Add (BodyPart.ElementType.Earth);
		ms_strongAgainst [BodyPart.ElementType.Fire].Add (BodyPart.ElementType.Plant);
		ms_strongAgainst [BodyPart.ElementType.Plant].Add (BodyPart.ElementType.Water);
		ms_strongAgainst [BodyPart.ElementType.Earth].Add (BodyPart.ElementType.Fire);
		ms_strongAgainst [BodyPart.ElementType.Earth].Add (BodyPart.ElementType.Poison);
		ms_strongAgainst [BodyPart.ElementType.Poison].Add (BodyPart.ElementType.Spirit);
		ms_strongAgainst [BodyPart.ElementType.Poison].Add (BodyPart.ElementType.Light);
		ms_strongAgainst [BodyPart.ElementType.Dark].Add (BodyPart.ElementType.Spirit);
		ms_strongAgainst [BodyPart.ElementType.Light].Add (BodyPart.ElementType.Dark);
		ms_strongAgainst [BodyPart.ElementType.Bug].Add (BodyPart.ElementType.Plant);
		ms_strongAgainst [BodyPart.ElementType.Bug].Add (BodyPart.ElementType.Dark);
		ms_strongAgainst [BodyPart.ElementType.Fire].Add (BodyPart.ElementType.Bug);
		ms_strongAgainst [BodyPart.ElementType.Metal].Add (BodyPart.ElementType.Light);
		ms_strongAgainst [BodyPart.ElementType.Earth].Add (BodyPart.ElementType.Metal);
		ms_strongAgainst [BodyPart.ElementType.Fire].Add (BodyPart.ElementType.Metal);
        ms_strongAgainst[BodyPart.ElementType.Dragon].Add(BodyPart.ElementType.Earth);
        ms_strongAgainst[BodyPart.ElementType.Dragon].Add(BodyPart.ElementType.Metal);
        ms_strongAgainst[BodyPart.ElementType.Spirit].Add(BodyPart.ElementType.Dragon);
    }

	public int GetPartsOfType(BodyPart.ElementType type){
        int partsOfType = 0;
        
        partsOfType = m_typeScores[(int)type];

        return partsOfType;
	}

	protected virtual void GenerateProfile(){
		m_typeScores = new int[BodyPart.ElementType.GetNames(typeof(BodyPart.ElementType)).Length];
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
