using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class PlayerProfile : Profile {

	[SerializeField]private SpriteRenderer m_matchRenderer;

	[SerializeField]private Sprite m_match;

	[SerializeField]private Sprite m_litMatch;
	[SerializeField]private Sprite m_burntMatch;

	private IEnumerator m_burningRoutine;
	private static int ms_score = 0;

	protected static PlayerProfile ms_instance;

	void Awake(){
		
		ms_instance = this;
	}


	public override void ResetScore(){
		ms_score = 0;
	}

	public static int GetScore(){
		return ms_score;
	}

	public static bool Conflicts(BodyPart a, BodyPart b){
		return ms_strongAgainst [a.GetElementType ()].Contains (b.GetElementType ()) || ms_strongAgainst [b.GetElementType ()].Contains (a.GetElementType ());
	}

	public bool CheckForMatch(Profile potentialMatch){
		//calculate num same parts (likelihood of match)
		int sameParts = 0;
		for (int i = 0; i < (int)BodyPart.ElementType.Count; i++) {
			sameParts += Mathf.Min (GetPartsOfType ((BodyPart.ElementType)i), potentialMatch.GetPartsOfType ((BodyPart.ElementType)i));
		}


		int differentParts = 0;
		//calculate num typematched parts (likelihood of unmatch)
		foreach (BodyPart.ElementType type in ms_strongAgainst.Keys) {
			foreach (BodyPart.ElementType strongAgainst in ms_strongAgainst[type]) {
				differentParts += Mathf.Min (GetPartsOfType(type),potentialMatch.GetPartsOfType(strongAgainst)) + Mathf.Min (potentialMatch.GetPartsOfType(strongAgainst),GetPartsOfType(type));
			}
		}

		return sameParts > differentParts * 2.5f;

	}

	private IEnumerator Burn(){
		while (true) {
			m_matchRenderer.sprite = m_litMatch;
			yield return new WaitForSeconds (.1f);
			m_matchRenderer.sprite = m_match;
			yield return new WaitForSeconds (.1f);
		}
	}

	public static void AddMatch(){
		if (ms_instance.m_burningRoutine != null) {
			ms_instance.StopCoroutine (ms_instance.m_burningRoutine);
		}
		ms_instance.m_burningRoutine = ms_instance.Burn ();

		ms_instance.StartCoroutine (ms_instance.m_burningRoutine);

		Text scoreText = GameObject.FindWithTag ("ScoreText").GetComponent<Text>() as Text;

		ms_score++;
		scoreText.text = "Score: "+ ms_score;

	}
	public static void RemoveMatch(){
		if (ms_instance.m_burningRoutine != null) {
			ms_instance.StopCoroutine (ms_instance.m_burningRoutine);
		}
		ms_instance.m_matchRenderer.sprite = ms_instance.m_burntMatch;
		Text scoreText = GameObject.FindWithTag ("ScoreText").GetComponent<Text>() as Text;

		ms_score--;
		scoreText.text = "Score: "+ ms_score;
	}
}
