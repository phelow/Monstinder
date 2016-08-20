using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class StartGame : MonoBehaviour {

	// Use this for initialization
	public void LaunchGame () {
		SceneManager.LoadScene (1);
	}	
}
