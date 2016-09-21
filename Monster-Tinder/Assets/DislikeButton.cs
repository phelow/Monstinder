using UnityEngine;
using System.Collections;

public class DislikeButton : Button {
	[SerializeField]GameObject m_match;
	[SerializeField]private AudioClip m_noMatchDislikeClip;
	[SerializeField]private AudioClip m_matchDislikeClip;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown(){
		GameObject go = GameObject.FindGameObjectWithTag ("NextMatch");

		GameObject.Instantiate (m_match, go.transform.position, go.transform.rotation);

		//if not match play tearing bubble wrap sound
		if (this.m_player.CheckForMatch (MatchProfile.ms_currentMatch)) {
			PlayerProfile.RemoveMatch ();
			this.m_audioSource.PlayOneShot (m_matchDislikeClip);
		} else {
			//else if it wasn't a match play popping noise
			this.m_audioSource.PlayOneShot (m_noMatchDislikeClip);

		}

		StartCoroutine (DestroyMatch (go.transform.parent.gameObject));
		Destroy (go);
	}
}
