using UnityEngine;
using System.Collections;

public class DislikeButton : Button {
	[SerializeField]GameObject m_match;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown(){
		GameObject go = GameObject.FindGameObjectWithTag("NextMatch");

		GameObject.Instantiate (m_match, go.transform.position, go.transform.rotation);
		StartCoroutine (DestroyMatch (go.transform.parent.gameObject));
		Destroy (go);
	}
}
