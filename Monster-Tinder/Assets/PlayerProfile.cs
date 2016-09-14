using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.UI;


public class PlayerProfile : Profile {

	private static int ms_score = 0;

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

		return sameParts >= differentParts * 1.5f;

	}

	public static void AddMatch(){
		Text scoreText = GameObject.FindWithTag ("ScoreText").GetComponent<Text>() as Text;

		ms_score++;
		scoreText.text = "Score: "+ ms_score;
	}
	public static void RemoveMatch(){
		Text scoreText = GameObject.FindWithTag ("ScoreText").GetComponent<Text>() as Text;

		ms_score--;
		scoreText.text = "Score: "+ ms_score;
	}
}
