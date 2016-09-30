using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class ReturnToMainMenuOnClick : MonoBehaviour {
	void Start(){

		Fader.Instance.FadeOut (3.0f);
	}

	public void r(){

		Fader.Instance.FadeIn().LoadLevel( "Main Menu" ).FadeOut();
	}
}
