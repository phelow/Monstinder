using UnityEngine;
using System.Collections;

public class LikeButton : Button {
	[SerializeField]GameObject m_match;
	[SerializeField]private AudioClip m_noMatchLikeClip;
	[SerializeField]private AudioClip m_matchLikeClip;
	// Use this for initialization
	void Start () {
		this.m_player = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerProfile>();

    }
	
	// Update is called once per frame
	void Update () {

        if (Input.GetKeyDown(KeyCode.LeftArrow))
        {
            ButtonPress();
        }
    }

	public void ButtonPress(){
		if (Button.ms_active) {
			//Spawn a new Match
			//TODO: clean this up
			GameObject go = MatchProfile.ms_currentMatch.NextMatchPostion();
            Vector3 position = go.transform.position;
			Quaternion rotation = go.transform.rotation;

			Debug.Log ("Like");

            Profile.StopHighlightingParts(m_player, MatchProfile.ms_currentMatch);
            bool isMatch;

			if (m_player.CheckForMatch (MatchProfile.ms_currentMatch)) {
                isMatch = true;

                //Profile.HighLightMatchingParts (m_player, MatchProfile.ms_currentMatch);
				this.m_audioSource.PlayOneShot (m_matchLikeClip);
				PlayerProfile.AddMatch ();
                MatchManager.SaveMatch(MatchProfile.ms_currentMatch.gameObject);

                MatchManager.InstantiateNewMatch(true);
            } else
            {
                this.m_player.DropMatchCorrections(MatchProfile.ms_currentMatch);
                isMatch = false;

                this.m_audioSource.PlayOneShot (m_noMatchLikeClip);
				//Profile.HighLightConflicts (m_player, MatchProfile.ms_currentMatch);
				PlayerProfile.RemoveMatch ();
                MatchManager.SaveReject(MatchProfile.ms_currentMatch.gameObject);
                MatchManager.ShowWhyYouFailed(false);
            }
        }

	}
}
