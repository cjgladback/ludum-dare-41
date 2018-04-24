/*
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObjectSpawner : MonoBehaviour {

	ObjectPooler objectPooler;

	public Transform foodPlacer;

	Vector3[] foodspot;

	private void Start(){
		foodspot = new Vector3[foodPlacer.childCount];
		for (int i = 0; i < foodspot.Length; i++) {
			foodspot [i] = foodPlacer.GetChild (i).position;
			foodspot [i] = new Vector3 (foodspot [i].x, transform.position.y, foodspot [i].z);
		}
		Placement(foodspot);
	}

	void Placement(Vector3[] foodspot){
		foreach (Vector3 spot in foodspot) {
			objectPooler = ObjectPooler.Instance;
			objectPooler.SpawnFromPool ("food", transform.position, Quaternion.identity);
			Debug.Log ("Placed food at " + transform.position);
		}
	}

}
*/