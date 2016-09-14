using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class ReturnToMainMenuOnClick : MonoBehaviour {
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown (0) || Input.GetMouseButtonDown (1) || Input.GetMouseButtonDown (2)) {
			SceneManager.LoadScene (0);
		}
	}
}
