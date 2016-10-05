﻿using UnityEngine;
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
			availableElements.Add (BodyPart.ElementType.Plant);
		}

		if (curDifficulty >= 2) {
			availableElements.Add (BodyPart.ElementType.Earth);
			availableElements.Add (BodyPart.ElementType.Dark);
		}


		if (curDifficulty >= 3) {
			availableElements.Add (BodyPart.ElementType.Spirit);
			availableElements.Add (BodyPart.ElementType.Poison);
		}


		if (curDifficulty >= 4) {
			availableElements.Add (BodyPart.ElementType.Light);
			availableElements.Add (BodyPart.ElementType.Bug);
		}

		if (curDifficulty >= 5) {
			availableElements.Add (BodyPart.ElementType.Metal);
            availableElements.Add(BodyPart.ElementType.Dragon);
        }
        if (curDifficulty >= 5)
        {
            availableElements.Add(BodyPart.ElementType.Glitch);
        }

        return availableElements;

	}


	private IEnumerator TimeLevel(int time){
		//Check for level unlocked
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);
		int maxLevelUnlocked = PlayerPrefs.GetInt ("MaxLevel", 0);
		int matchesNeeded = curDifficulty*3  + 5 / Mathf.Max ((5 - curDifficulty), 1) + 2;
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
		}

		PlayerPrefs.SetInt ("LastDifficultyPlayed",curDifficulty);

		PlayerPrefs.SetInt ("LastCorrectChoices",PlayerProfile.GetCorrectChoices());
		PlayerPrefs.SetInt ("LastIncorrectChoices",PlayerProfile.GetIncorrectChoices());

			//if unlocked return to main menu
		if ( PlayerProfile.GetScore ()  >= matchesNeeded) {
			if (maxLevelUnlocked < curDifficulty + 1) {
				PlayerPrefs.SetInt ("MaxLevel", curDifficulty + 1);
			}


			Fader.Instance.FadeIn().LoadLevel( "Success" ).FadeOut();
		} else {

			Fader.Instance.FadeIn().LoadLevel( "Failure" ).FadeOut();
		}
			//else offer option to repeat the level
	}



	// Update is called once per frame
	void Update () {
	
	}
}
