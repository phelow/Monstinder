using UnityEngine;
using System.Collections;

public class DestroyAfterTime : MonoBehaviour {
	private float m_timeUntilDestroy = 5.0f;
	// Use this for initialization
	void Start () {
		StartCoroutine (DestroyLater (m_timeUntilDestroy));
	}

	private IEnumerator DestroyLater(float time){
		yield return new WaitForSeconds (time);
		Destroy (this.gameObject);
	}

	// Update is called once per frame
	void Update () {
	
	}
}
