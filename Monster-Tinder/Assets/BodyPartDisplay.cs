using UnityEngine;
using System.Collections;

public class BodyPartDisplay : MonoBehaviour {
	private GameObject m_displayedPart;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void ButtonClicked(){
		PlayerProfile.SetChoice (m_displayedPart.GetComponent<BodyPart> ());
	}

	public void Display(GameObject go,float minRotation,float maxRotation){
		if (m_displayedPart != null) {
			Destroy (m_displayedPart);
		}
		m_displayedPart = GameObject.Instantiate (go, transform.position + transform.forward * -10, transform.rotation) as GameObject;
		m_displayedPart.transform.localScale = m_displayedPart.transform.localScale * 4.0f;
		m_displayedPart.transform.Rotate(new Vector3(0,0,Random.Range(minRotation,maxRotation)));
	}
}
