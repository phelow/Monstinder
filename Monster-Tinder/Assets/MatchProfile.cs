using UnityEngine;
using System.Collections;

public class MatchProfile : Profile {
	public static MatchProfile ms_currentMatch;
	[SerializeField]private GameObject m_nextMatch;

    [SerializeField]
    private SpriteRenderer m_polaroid;

    public void HidePolaroid()
    {
        Destroy(m_polaroid);
    }

	protected override void CacheIfMatchProfile(){
		Debug.Log ("Caching");
	}

    public GameObject NextMatchPostion()
    {
        return m_nextMatch;
    }
}
