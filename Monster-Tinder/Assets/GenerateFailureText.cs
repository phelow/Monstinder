using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GenerateFailureText : MonoBehaviour {
	[SerializeField]private Text m_text;
	// Use this for initialization
	void Start () {

		m_text.text = "You have failed. Click to return to main menu.";
	}

	
	// Update is called once per frame
	void Update () {
	
	}
}
