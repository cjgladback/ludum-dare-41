using UnityEngine;

public class trough: MonoBehaviour {
	public static bool troughFull;

	public float radius = 3f;
	public GameObject carryFood;


	void OnCollisionEnter (Collision col)
	{
		if (foodInteraction.handsFull) {
			if (col.gameObject.name == "Player") {
				carryFood.SetActive (false);
				troughFull = true;
				foodInteraction.handsFull = false;
			}
		}
	}
		
	void OnDrawGizmosSelected () {
		Gizmos.color = Color.yellow;
		Gizmos.DrawWireSphere (transform.position, radius);
	}

}
