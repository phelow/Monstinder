using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections;

public class SessionManager : MonoBehaviour {
	private const int mc_startingTime = 30;
	private const int mc_timePerLevel = 10;

	[SerializeField]private Text m_timerText;
	[SerializeField]private Text m_matchesNeededText;
	[SerializeField]private AudioSource m_audioSource;
	[SerializeField]private AudioClip m_alarmClip;

	[SerializeField]private GameObject m_highscoreText;
	[SerializeField]private GameObject m_highscoreSpawnPosition;

	[SerializeField]private GameObject [] m_endGameDestruction;


	// Use this for initialization
	void Start () {
		//calculate time
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);
		int time = (int) ((curDifficulty) * (Mathf.Max(mc_timePerLevel - curDifficulty,0)) + mc_startingTime);

		//Kick off timer coroutine
		StartCoroutine(TimeLevel(time));
	}

	private IEnumerator TimeLevel(int time){

		//Check for level unlocked
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);
		int maxLevelUnlocked = PlayerPrefs.GetInt ("MaxLevel", 0);
		int matchesNeeded = curDifficulty + 5 / Mathf.Max ((5 - curDifficulty), 1) + 5;
		m_matchesNeededText.text = "matches Needed:" +  matchesNeeded;
		while (time > 0) {
			yield return new WaitForSeconds (1.0f);
			time--;
			m_timerText.text = "Time Left:" + time;
		}


		//end the level
		m_audioSource.PlayOneShot(m_alarmClip);
		yield return new WaitForSeconds (5.0f);



		//Check for high score, save if you have one
		int previousHighscore =  PlayerPrefs.GetInt ("HighScore",0);
		int curScore = PlayerProfile.GetScore ();

		if (curScore > previousHighscore) {
			PlayerPrefs.SetInt ("HighScore",curScore);

			GameObject.Instantiate (m_highscoreText, m_highscoreSpawnPosition.transform.position, m_highscoreSpawnPosition.transform.rotation);
		}


			//if unlocked return to main menu
		if (matchesNeeded < curScore) {
			if (maxLevelUnlocked < curDifficulty + 1) {
				PlayerPrefs.SetInt ("MaxLevel", curDifficulty + 1);
			}

			SceneManager.LoadScene (0);
		} else {
			yield return new WaitForSeconds(2.0f);
			foreach(GameObject go in m_endGameDestruction){
				Destroy(go);
			}
			SceneManager.LoadScene (1);
		}
			//else offer option to repeat the level
	}



	// Update is called once per frame
	void Update () {
	
	}
}
