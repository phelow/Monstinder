using UnityEngine;
using System.Collections;

public class DislikeButton : Button {
	[SerializeField]GameObject m_match;
	[SerializeField]private AudioClip m_noMatchDislikeClip;
	[SerializeField]private AudioClip m_matchDislikeClip;

	// Use this for initialization
	void Start () {
		this.m_player = GameObject.FindGameObjectWithTag ("Player").GetComponent<PlayerProfile>();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ButtonPress(){
		if (Button.ms_active) {
			GameObject go = MatchProfile.ms_currentMatch.NextMatchPostion();
            Vector3 position = go.transform.position;
            Quaternion rotation = go.transform.rotation;

            //if not match play tearing bubble wrap sound
            if (this.m_player.CheckForMatch(MatchProfile.ms_currentMatch)) {
                Profile.HighLightMatchingParts(m_player, MatchProfile.ms_currentMatch);
                PlayerProfile.RemoveMatch();
                this.m_audioSource.PlayOneShot(m_matchDislikeClip);
                MatchManager.SaveMatch(MatchProfile.ms_currentMatch.gameObject);

            } else {
                Profile.HighLightConflicts(m_player, MatchProfile.ms_currentMatch);
                //else if it wasn't a match play popping noise
                this.m_audioSource.PlayOneShot(m_noMatchDislikeClip);
                MatchManager.SaveReject(MatchProfile.ms_currentMatch.gameObject);

            }
			MatchManager.DockMatch (MatchProfile.ms_currentMatch.gameObject);
            MatchProfile.ms_currentMatch = (GameObject.Instantiate(m_match, position, rotation) as GameObject).GetComponent<MatchProfile>();
        }
	}
}
