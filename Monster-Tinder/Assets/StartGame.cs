using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour {

	public void Start(){
		Fader.Instance.FadeOut (3);
	}

	// Use this for initialization
	public void LaunchGame () {

		Fader.Instance.FadeIn().LoadLevel( "CharacterCustomization" ).FadeOut();
	}	
}
