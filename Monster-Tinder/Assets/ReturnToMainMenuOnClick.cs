using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class ReturnToMainMenuOnClick : MonoBehaviour {
	void Start(){

		Fader.Instance.FadeOut (3.0f);
	}
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown (0) || Input.GetMouseButtonDown (1) || Input.GetMouseButtonDown (2)) {
			Fader.Instance.FadeIn().LoadLevel( "Main Menu" ).FadeOut();
		}
	}
}
