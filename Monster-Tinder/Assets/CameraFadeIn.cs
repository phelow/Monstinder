using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class CameraFadeIn : MonoBehaviour {
	[SerializeField]private Image m_image;

	[SerializeField]private float m_fadeTime;
	// Use this for initialization
	void Start () {
		StartCoroutine (FadeIn ());	
	}

	private IEnumerator FadeIn(){
		yield return new WaitForSeconds (1.1f);
		float t = 0.0f;
		while (t < m_fadeTime) {
			t += Time.deltaTime;
			m_image.color = Color.Lerp (Color.black, Color.clear, t / m_fadeTime);
			yield return new WaitForEndOfFrame ();
		}

		Destroy (m_image.gameObject);
	}
}
