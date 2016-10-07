using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class MatchManager : MonoBehaviour {
	private static MatchManager ms_instance;

	[SerializeField]private GameObject m_matchDockingPoint;
	[SerializeField]private GameObject m_dockedMatch;

    public List<GameObject> m_rejectedMatches;
    public List<GameObject> m_acceptedMatches;

    private const float mc_seekMagnitude = 1000.0f;
	private const float mc_distanceMaximum = 2.0f;

    [SerializeField]
    private GameObject m_originalMatch;

	// Use this for initialization
	void Start () {
		ms_instance = this;
        DontDestroyOnLoad(this.gameObject);

        m_acceptedMatches = new List<GameObject>();
        m_rejectedMatches = new List<GameObject>();
        MatchProfile.ms_currentMatch = m_originalMatch.GetComponent<MatchProfile>();

    }

    public static int NumMatches()
    {
        if(ms_instance == null)
        {
            return -1;
        }

        return ms_instance.m_acceptedMatches.Count;
    }

    public static List<GameObject> GetMatches()
    {
        return ms_instance.m_acceptedMatches;
    }

    public static void SaveMatch(GameObject match)
    {
        ms_instance.m_acceptedMatches.Add(GameObject.Instantiate(match,ms_instance.gameObject.transform,false) as GameObject);
    }

    public static void SaveReject(GameObject match)
    {
        ms_instance.m_rejectedMatches.Add(GameObject.Instantiate(match, ms_instance.gameObject.transform, false) as GameObject);
    }

	private void ReleaseMatch(){
		if (m_dockedMatch == null) {
			return;
		}
		StartCoroutine (DestroyMatch (m_dockedMatch));
		m_dockedMatch = null;
	}

	private IEnumerator DestroyMatch(GameObject go){

		Rigidbody2D rb = go.GetComponent<Rigidbody2D> ();

		rb.isKinematic = false;
		rb.AddForce (new Vector2(Random.Range(-500.0f,500.0f),Random.Range(-500.0f,500.0f)));
		rb.gravityScale = 10.0f;
		yield return new WaitForSeconds (2.0f);
		Destroy (go);
	}

    private IEnumerator ShrinkMatchCoroutine(GameObject match)
    {
        Vector3 origScale = match.transform.localScale;
        float shrinkTime = 0.4f;
        float t = 0.0f;
        while(t < shrinkTime)
        {
            t += Time.deltaTime;
            match.transform.localScale = Vector3.Lerp(origScale, origScale * .5f, t/shrinkTime);
            yield return new WaitForEndOfFrame();
        }
    }


    private IEnumerator DockMatchCoroutine(GameObject match){
		m_dockedMatch = match;
		Rigidbody2D rb = match.GetComponent<Rigidbody2D> ();
		BoxCollider2D [] colliders = match.GetComponentsInChildren<BoxCollider2D> ();

		for(int i = 0; i < colliders.Length; i++){
			Destroy (colliders[i]);
		}
		//Add a random force to the match

		rb.isKinematic = false;
		rb.AddForce (new Vector2(Random.Range(-50.0f,50.0f),Random.Range(-50.0f,50.0f)));

		//seek the docking point until within a current range of it.
		while (match != null && Vector2.Distance (new Vector2(match.transform.position.x,match.transform.position.y), 
			new Vector2(m_matchDockingPoint.transform.position.x,m_matchDockingPoint.transform.position.y)) > mc_distanceMaximum) {
			Vector2 force = (new Vector2 (m_matchDockingPoint.transform.position.x, m_matchDockingPoint.transform.position.y)
				- new Vector2 (match.transform.position.x, match.transform.position.y)).normalized * mc_seekMagnitude * Time.deltaTime;

			rb.AddForce (force);

			Debug.DrawRay (match.transform.position, force);
			yield return new WaitForEndOfFrame ();
		}

		//Lock the position
		rb.isKinematic = true;
	}

	public static void DockMatch(GameObject match){
		//release previously docked match
		ms_instance.ReleaseMatch();

		//Dock the new match
		ms_instance.StartCoroutine (ms_instance.DockMatchCoroutine (match));
        ms_instance.StartCoroutine(ms_instance.ShrinkMatchCoroutine(match));

	}
}
