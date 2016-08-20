using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DifficultySystem : MonoBehaviour {
	[SerializeField]private Text m_text;
	// Use this for initialization
	void Start () {
		SetDifficulty ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	private void SetDifficulty(){
		m_text.text = "Level: " + PlayerPrefs.GetInt ("Level",0);

	}

	public void RaiseDifficulty(){
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);
		int maxDifficultyUnlocked = PlayerPrefs.GetInt ("MaxLevel", 0);

		if (curDifficulty < maxDifficultyUnlocked) {
			PlayerPrefs.SetInt ("Level", curDifficulty + 1);
		}
		SetDifficulty ();
	}

	public void LowerDifficuty(){
		int curDifficulty = PlayerPrefs.GetInt ("Level",0);

		if (curDifficulty > 0) {
			PlayerPrefs.SetInt ("Level", curDifficulty - 1);
		}
		SetDifficulty ();
	}
}
