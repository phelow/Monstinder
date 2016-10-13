using UnityEngine;
using System.Collections;

public class MatchChoice : MonoBehaviour {
    private GameObject m_monster;
    private GameObject m_monsterReference;
    public Profile m_monsterProfile;
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

    public void HideCharacter()
    {
        m_monsterReference.transform.position = new Vector3(1000000, 99999999999999, 9999999999);
        m_monsterReference.transform.SetParent(null);
    }

    public void SetPlayerChoice()
    {
        Tutorializer.SetPlayerChoice(this);
    }

    public void SetMonster(GameObject choice)
    {
        m_monsterReference = choice;

        m_monsterProfile = m_monsterReference.GetComponent<Profile>();
        m_monster = choice;
        choice.transform.position = this.transform.position;

        m_monster.GetComponent<MatchProfile>().HidePolaroid();
    }

    public bool GetIsBetterChoiceThan(MatchChoice otherChoice)
    {
        return GetSamePartsAsPlayerCount() - GetDifferentPartsFromPlayerCount() >=
            otherChoice.GetSamePartsAsPlayerCount() - otherChoice.GetDifferentPartsFromPlayerCount();
    }

    public int GetSamePartsAsPlayerCount()
    {
        return ms_playerProfile.GetSameParts(m_monsterProfile);
    }

    public int GetDifferentPartsFromPlayerCount()
    {
        return ms_playerProfile.GetDifferentParts(m_monsterProfile);
    }

    public GameObject GetMonster()
    {
        return m_monsterReference;
    }
}
