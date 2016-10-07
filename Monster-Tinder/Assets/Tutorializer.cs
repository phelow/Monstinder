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
    public MatchChoice m_playerChoice;

    [SerializeField]
    private Text m_timerText;

    // Use this for initialization
    void Start () {
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
        ms_instance.m_playerChoice = choice;
    }

    private IEnumerator PickOne()
    {
        List<GameObject> matches = MatchManager.GetMatches();
        while (matches.Count > 1)
        {
            //start a timer
            float timeLeft = 5.0f;

            //randomly choose two matches
            GameObject leftMatch = matches[Random.Range(0, matches.Count)];
            matches.Remove(leftMatch);
            GameObject rightMatch = matches[Random.Range(0, matches.Count)];
            matches.Remove(rightMatch);

            m_rightChoice.SetMonster(leftMatch);
            m_leftChoice.SetMonster(rightMatch);

            m_playerChoice = null;
            //wait for player input
            while(m_playerChoice == null && timeLeft > 0.0f)
            {
                timeLeft -= Time.deltaTime;
                m_timerText.text = "" + timeLeft;
                yield return new WaitForEndOfFrame();
            }


            //see if the player picked the best match
            bool m_rightBest = m_rightChoice.GetIsBetterChoiceThan(m_leftChoice);
            if ((!m_rightBest && m_playerChoice == m_leftChoice) ||(m_rightBest && m_playerChoice == m_rightChoice))
            {
                matches.Add(m_playerChoice.GetMonster());
            }
            else
            {
                //FAILURE
                SceneManager.LoadScene("Failure");
            }

            //award points
        }
        SceneManager.LoadScene("Success");
    }

}
