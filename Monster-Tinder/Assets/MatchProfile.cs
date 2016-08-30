using UnityEngine;
using System.Collections;

public class MatchProfile : Profile {
	public static MatchProfile ms_currentMatch;
	[SerializeField]private GameObject m_nextMatch;

	protected override void CacheIfMatchProfile(){
		Debug.Log ("Caching");
		ms_currentMatch = this;
	}
}
