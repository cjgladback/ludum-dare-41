using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class foodInteraction : MonoBehaviour {

	public GameObject carryFood;
	public static bool handsFull;

	void Start (){
	}

	void OnCollisionEnter (Collision col)
	{
		if (col.gameObject.name == "Player") {
			if (handsFull == false) {
				Destroy (gameObject); 
				carryFood.SetActive (true);
				handsFull = true;

			}
		}
	}
}
