using UnityEngine;
using System.Collections;

public class LikeButton : Button {
	[SerializeField]GameObject m_match;
	[SerializeField]private AudioClip m_noMatchLikeClip;
	[SerializeField]private AudioClip m_matchLikeClip;
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
			this.m_audioSource.PlayOneShot (m_matchLikeClip);
			PlayerProfile.AddMatch ();
		} else {
			this.m_audioSource.PlayOneShot (m_noMatchLikeClip);
			PlayerProfile.RemoveMatch ();

		}

		StartCoroutine (DestroyMatch (go.transform.parent.gameObject));
		Destroy (go);
	}
}
