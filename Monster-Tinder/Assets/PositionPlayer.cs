using UnityEngine;
using System.Collections;

public class PositionPlayer : MonoBehaviour {

	// Use this for initialization
	void Start () {
        GameObject.FindGameObjectWithTag("Player").transform.position = transform.position;
	}
}
