using UnityEngine;
using System.Collections;

public class LikeButton : MonoBehaviour {
	[SerializeField]PlayerProfile m_player;
	[SerializeField]GameObject m_match;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown(){
		//Spawn a new Match
		//TODO: clean this up
		GameObject go = GameObject.FindGameObjectWithTag("NextMatch");
		GameObject.Instantiate (m_match, go.transform.position, go.transform.rotation);

		Debug.Log ("Like");

		if (m_player.CheckForMatch (MatchProfile.ms_currentMatch)) {
			PlayerProfile.AddMatch ();
		} else {
			PlayerProfile.RemoveMatch ();

		}
		Destroy (go.transform.parent.gameObject);
	}
}
