using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GenerateText : MonoBehaviour {
	[SerializeField]private Text m_text;
	// Use this for initialization
	void Start () {
		int curDifficulty = PlayerPrefs.GetInt ("LastDifficultyPlayed");

		m_text.text = "Success! Level " + (curDifficulty+1)+ " has been unlocked. Click to return to main menu.";
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
