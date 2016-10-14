using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;
using UnityEngine.SceneManagement;

public class Tutorializer : MonoBehaviour {
    public static Tutorializer ms_instance;

    [SerializeField]
    private Text m_text;

    [SerializeField]
    private MatchChoice m_leftChoice;

    [SerializeField]
    private MatchChoice m_rightChoice;

    [SerializeField]
    private static MatchChoice ms_playerChoice;

    [SerializeField]
    private Text m_timerText;

    [SerializeField]
    private Text m_hintText;

    [SerializeField]
    private AudioSource m_source;

    [SerializeField]
    private AudioClip m_countingSound;
    [SerializeField]
    private AudioClip m_alarm;
    [SerializeField]
    private AudioClip m_tick;
    [SerializeField]
    private AudioClip m_match;
    [SerializeField]
    private AudioClip m_fail;
    [SerializeField]
    private AudioClip m_completeSound;

    private Text m_scoreText;

    private int score;
    public List<GameObject> matches; //temporarily public

    // Use this for initialization
    void Start () {
        PlayerProfile.GetPlayer().StartHighlighting();


        m_scoreText = GameObject.Find("CurrentScoreText").GetComponent<Text>();
        score = PlayerPrefs.GetInt("HighScore");

        m_scoreText.text = "" + score;

        ms_instance = this;
        StartCoroutine(Tutorialize());
	}
	
    private IEnumerator Tutorialize()
    {
        Fader.Instance.FadeOut(1.0f);
        m_text.text = "Congratulations, you got " + MatchManager.NumMatches() + " matches.";
        yield return new WaitForSeconds(3.0f);
        Fader.Instance.FadeIn(1.0f);
        yield return new WaitForSeconds(2.0f);
        Fader.Instance.FadeOut(1.0f);
        m_text.text = "But can you find true love?";
        yield return new WaitForSeconds(3.0f);
        Fader.Instance.FadeIn(1.0f);
        yield return new WaitForSeconds(2.0f);
        m_text.text = "Pick the best match";
        Fader.Instance.FadeOut(1.0f);
        yield return new WaitForSeconds(1.0f);
        StartCoroutine(PickOne());
    }

    public static void SetPlayerChoice(MatchChoice choice)
    {
        Tutorializer.ms_playerChoice = choice;
    }

    private void AddPoint(int points)
    {
        score += points;
        PlayerPrefs.SetInt("Score", score);

        m_scoreText.text = "" + ++score;
    }

    private IEnumerator PickOne()
    {
        foreach(SpriteRenderer sr in PlayerProfile.GetPlayer().GetComponentsInChildren<SpriteRenderer>())
        {
            sr.color = Color.white;
        }

        matches = MatchManager.GetMatches();
        while (matches.Count > 1)
        {
            //start a timer
            float timeLeft = 15.0f;

            //randomly choose two matches
            GameObject leftMatch = matches[Random.Range(0, matches.Count)];
            matches.Remove(leftMatch);
            GameObject rightMatch = matches[Random.Range(0, matches.Count)];
            matches.Remove(rightMatch);

            m_rightChoice.SetMonster(rightMatch);
            m_leftChoice.SetMonster(leftMatch);

            ms_playerChoice = null;
            //wait for player input
            while (ms_playerChoice == null && timeLeft > 0.0f)
            {
                if (timeLeft < 1.0f)
                {
                    this.m_source.PlayOneShot(this.m_alarm);
                }
                else
                {
                    this.m_source.PlayOneShot(this.m_tick);

                }

                timeLeft -= 1;
                m_timerText.text = "" + ((int)Mathf.Round(timeLeft));
            yield return new WaitForSeconds(1.0f);
            }

            bool success = true;
            //see if the player picked the best match
            bool m_rightBest = m_rightChoice.GetIsBetterChoiceThan(m_leftChoice);
            bool m_leftBest =  m_leftChoice.GetIsBetterChoiceThan(m_rightChoice);

            if(ms_playerChoice == null)
            {
                //FAILURE
                TallyScore();
                SceneManager.LoadScene("Failure");

            }

            if ((m_rightBest && m_leftBest )|| (!m_rightBest && ms_playerChoice == m_leftChoice) ||(m_rightBest && ms_playerChoice == m_rightChoice))
            {
                success = true;
                matches.Add(ms_playerChoice.GetMonster());
            }
            else
            {
                success = false;
            }

            float displayTime = 5.0f;

            MatchChoice otherChoice = m_rightChoice;

            if(otherChoice == ms_playerChoice)
            {
                otherChoice = m_leftChoice;
            }

            int sameCount = ms_playerChoice.GetSamePartsAsPlayerCount();
            int differentCount = ms_playerChoice.GetDifferentPartsFromPlayerCount();

            int p = sameCount + differentCount;

            m_hintText.text = "Matching Parts:" + 0;
            m_hintText.text += "\nClashing Parts:" + 0;

            Profile.HighLightMatchingParts(PlayerProfile.GetPlayer(), ms_playerChoice.GetMonster().GetComponent<Profile>());
            //compare the player and the choice made
            for (int i = 0; i < sameCount; i++) {
                this.m_source.Stop();
                this.m_source.PlayOneShot(this.m_countingSound);
                m_hintText.text = "Matching Parts:" + i;
                m_hintText.text += "\nClashing Parts:" + 0;
                AddPoint(1);
                displayTime -= Time.deltaTime;
                yield return new WaitForSeconds(Mathf.Lerp(0.1f, 1.0f, ((float)i) / sameCount));
            }
            this.m_source.PlayOneShot(this.m_completeSound);
            yield return new WaitForSeconds(1.0f);

            Profile.HighLightConflicts(PlayerProfile.GetPlayer(), ms_playerChoice.GetMonster().GetComponent<Profile>());

            for (int i = 0; i < differentCount; i++)
            {
                this.m_source.Stop();
                this.m_source.PlayOneShot(this.m_countingSound);
                m_hintText.text = "Matching Parts:" + sameCount;
                m_hintText.text += "\nClashing Parts:" + i;
                AddPoint(1);
                displayTime -= Time.deltaTime;
                yield return new WaitForSeconds(Mathf.Lerp(0.1f, 1.0f, ((float)i) / differentCount));
            }
            this.m_source.PlayOneShot(this.m_completeSound);
            yield return new WaitForSeconds(1.0f);

            displayTime = 5.0f;


            sameCount = otherChoice.GetSamePartsAsPlayerCount();
            differentCount = otherChoice.GetDifferentPartsFromPlayerCount();

            p += sameCount + differentCount;

            Profile.HighLightMatchingParts(PlayerProfile.GetPlayer(), otherChoice.GetMonster().GetComponent<Profile>());
            //compare the player and the choice made
            for (int i = 0; i < sameCount; i++)
            {
                this.m_source.Stop();
                this.m_source.PlayOneShot(this.m_countingSound);
                m_hintText.text = "Matching Parts:" + i;
                m_hintText.text += "\nClashing Parts:" + 0;
                AddPoint(1);
                displayTime -= Time.deltaTime;
                yield return new WaitForSeconds(Mathf.Lerp(0.1f,1.0f, ((float)i) / sameCount));
            }
            this.m_source.PlayOneShot(this.m_completeSound);
            yield return new WaitForSeconds(1.0f);


            Profile.HighLightConflicts(PlayerProfile.GetPlayer(), otherChoice.GetMonster().GetComponent<Profile>());
            for (int i = 0; i < differentCount; i++)
            {
                this.m_source.Stop();
                this.m_source.PlayOneShot(this.m_countingSound);
                m_hintText.text = "Matching Parts:" + sameCount;
                m_hintText.text += "\nClashing Parts:" + i;
                AddPoint(1);
                displayTime -= Time.deltaTime;
                yield return new WaitForSeconds(Mathf.Lerp(0.1f, 1.0f, ((float)i) / differentCount));
            }
            this.m_source.PlayOneShot(this.m_completeSound);
            yield return new WaitForSeconds(1.0f);

            if (success)
            {
                AddPoint(p);
            }
            else
            {

                this.m_source.PlayOneShot(this.m_fail);
                yield return new WaitForSeconds(1.0f);
                //FAILURE
                TallyScore();
                SceneManager.LoadScene("Failure");
            }
            this.m_source.PlayOneShot(this.m_match);
            yield return new WaitForSeconds(1.0f);

            m_leftChoice.HideCharacter();
            m_rightChoice.HideCharacter();
            //award points
        }
        matches[0].transform.name = "BestMatch";
        DontDestroyOnLoad(matches[0]);

        TallyScore();
        SceneManager.LoadScene("Success");
    }

    public void TallyScore()
    {

        int previousHighscore = PlayerPrefs.GetInt("HighScore", 0);
        int curScore = PlayerProfile.GetScore() * PlayerPrefs.GetInt("Level");
        PlayerPrefs.SetInt("Score", curScore);

        if (curScore > previousHighscore)
        {
            PlayerPrefs.SetInt("HighScore", curScore);
            PlayerPrefs.SetInt("HighScoreBeaten", 1);
        }
    }

}
