using UnityEngine;
using System.Collections;

public class BodyPartDisplay : MonoBehaviour {
	private GameObject m_displayedPart;
	private GameObject m_lastPart;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnMouseDown(){
		PlayerProfile.SetChoice (m_displayedPart.GetComponent<BodyPart> ());
	}

	public void Display(GameObject go){
		if (m_lastPart != null) {
			Destroy (m_lastPart);
		}
		m_displayedPart = go;
		m_lastPart = GameObject.Instantiate (go, transform.position + transform.forward * -10, transform.rotation) as GameObject;
	}
}
