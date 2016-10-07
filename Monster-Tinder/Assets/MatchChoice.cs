using UnityEngine;
using System.Collections;

public class MatchChoice : MonoBehaviour {
    private GameObject m_monster;
    private GameObject m_monsterReference;
    private Profile m_monsterProfile;
    private static PlayerProfile ms_playerProfile;

    [SerializeField]
    private Button m_button;
	// Use this for initialization
	void Start () {
        ms_playerProfile = GameObject.FindGameObjectWithTag("Player").GetComponentInChildren<PlayerProfile>();
	}
	
    public Profile GetMonsterProfile()
    {
        return m_monsterProfile;
    }

	// Update is called once per frame
	void Update () {
	
	}

    public void SetPlayerChoice()
    {
        Tutorializer.SetPlayerChoice(this);
    }

    public void SetMonster(GameObject choice)
    {
        m_monsterReference = choice;
        m_monster = GameObject.Instantiate(choice, transform.position, transform.rotation, transform) as GameObject;
    }

    public bool GetIsBetterChoiceThan(MatchChoice otherChoice)
    {
        return ms_playerProfile.GetSameParts(m_monsterProfile) - ms_playerProfile.GetDifferentParts(m_monsterProfile) >= 
            ms_playerProfile.GetSameParts(otherChoice.m_monsterProfile) - ms_playerProfile.GetDifferentParts(otherChoice.m_monsterProfile);
    }

    public GameObject GetMonster()
    {
        return m_monsterReference;
    }
}
