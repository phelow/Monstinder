using UnityEngine;
using System.Collections;

public class MatchProfile : Profile {
	public static MatchProfile ms_currentMatch;
	[SerializeField]private GameObject m_nextMatch;

	public override void CacheIfMatchProfile(){
		Debug.Log ("Caching");
		ms_currentMatch = this;
	}
}
