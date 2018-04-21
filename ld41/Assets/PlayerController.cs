﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public LayerMask movementMask;

	Camera cam;

	// Use this for initialization
	void Start () {
		cam = Camera.main;
		
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetMouseButtonDown (0)) {
			Ray ray = cam.ScreenPointToRay (Input.mousePosition);
			RaycastHit hit;

			if (Physics.Raycast (ray, out hit, 100, movementMask)) {
				Debug.Log ("We hit " + hit.collider.name + " " + hit.point);
				// Move player to clicked position

				// Stop focusing on any objects

			}
		}
		
	}
}
