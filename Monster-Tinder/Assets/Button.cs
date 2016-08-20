using UnityEngine;
using System.Collections;

public class Button : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	protected IEnumerator DestroyMatch(GameObject go){
		Rigidbody2D rb = go.GetComponent<Rigidbody2D> ();
		Debug.Log (go);
		rb.AddForce (new Vector2(Random.Range(-500.0f,500.0f),Random.Range(-500.0f,500.0f)));
		rb.gravityScale = 10.0f;
		yield return new WaitForSeconds (5.0f);
		Destroy (go);
	}
}
