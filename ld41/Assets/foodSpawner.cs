using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class foodSpawner : MonoBehaviour {

	ObjectPooler objectPooler;

	private void Start(){
		objectPooler = ObjectPooler.Instance;
	}

	// Update is called once per frame
	void FixedUpdate () {
		objectPooler.SpawnFromPool ("food", transform.position, Quaternion.identity);
		
	}
}
