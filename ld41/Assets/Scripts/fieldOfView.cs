using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class fieldOfView : MonoBehaviour {

	public float fovangle = 110f;
	public bool playerInSight;
	public Vector3 personalLastSighting;

	private NavMeshAgent nav;
	private CapsuleCollider col;
	private Animator anim;
	//private LastPlayerSighting lastPlayerSighting;
	private GameObject player;
	private Animator playerAnim;
	//private HashIDs hash;
	private Vector3 previousSighting;

	void Awake(){
		nav = GetComponent<NavMeshAgent> ();
	}

}
