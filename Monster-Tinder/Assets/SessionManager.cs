using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections.Generic;
using UnityEngine.UI;
using System.Collections;

public class SessionManager : MonoBehaviour {
	private const int mc_startingTime = 30;
	private const int mc_timePerLevel = 30;

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

	public static List<BodyPart.ElementType> AvailableTypes(){
		List<BodyPart.ElementType> availableElements = new List<BodyPart.ElementType>();
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);

		if (curDifficulty >= 0) {
			availableElements.Add (BodyPart.ElementType.Fire);
			availableElements.Add (BodyPart.ElementType.Water);
			availableElements.Add (BodyPart.ElementType.Grass);
		}

		if (curDifficulty >= 2) {
			availableElements.Add (BodyPart.ElementType.Ground);
			availableElements.Add (BodyPart.ElementType.Dark);
		}


		if (curDifficulty >= 3) {
			availableElements.Add (BodyPart.ElementType.Ghost);
			availableElements.Add (BodyPart.ElementType.Poison);
		}


		if (curDifficulty >= 4) {
			availableElements.Add (BodyPart.ElementType.Fairy);
			availableElements.Add (BodyPart.ElementType.Bug);
		}

		if (curDifficulty >= 5) {
			availableElements.Add (BodyPart.ElementType.Steel);
		}

		return availableElements;

	}


	private IEnumerator TimeLevel(int time){
		//Check for level unlocked
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);
		int maxLevelUnlocked = PlayerPrefs.GetInt ("MaxLevel", 0);
		int matchesNeeded = curDifficulty  + 5 / Mathf.Max ((5 - curDifficulty), 1) + 2;
		m_matchesNeededText.text = "matches Needed:" +  matchesNeeded;
		while (time > 0) {
			yield return new WaitForSeconds (1.0f);
			time--;
			m_timerText.text = "Time Left:" + time;
		}


		//end the level
		m_audioSource.PlayOneShot(m_alarmClip);
		yield return new WaitForSeconds (3.0f);



		//Check for high score, save if you have one
		int previousHighscore =  PlayerPrefs.GetInt ("HighScore",0);
		int curScore = PlayerProfile.GetScore () * curDifficulty;

		if (curScore > previousHighscore) {
			PlayerPrefs.SetInt ("HighScore",curScore );
			PlayerPrefs.SetInt ("HighScoreBeaten", 1);

			GameObject.Instantiate (m_highscoreText, m_highscoreSpawnPosition.transform.position, m_highscoreSpawnPosition.transform.rotation);
		}

		PlayerPrefs.SetInt ("LastDifficultyPlayed",curDifficulty);


			//if unlocked return to main menu
		if (matchesNeeded < curScore) {
			if (maxLevelUnlocked < curDifficulty + 1) {
				PlayerPrefs.SetInt ("MaxLevel", curDifficulty + 1);
			}

			Destroy (GameObject.FindGameObjectWithTag ("Player"));

			Fader.Instance.FadeIn().LoadLevel( "Success" ).FadeOut();
		} else {
			yield return new WaitForSeconds(2.0f);
			foreach(GameObject go in m_endGameDestruction){
				Destroy(go);
			}

			Destroy (GameObject.FindGameObjectWithTag ("Player"));

			Fader.Instance.FadeIn().LoadLevel( "Failure" ).FadeOut();
		}
			//else offer option to repeat the level
	}



	// Update is called once per frame
	void Update () {
	
	}
}
