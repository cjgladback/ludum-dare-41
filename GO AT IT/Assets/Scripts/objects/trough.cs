using UnityEngine;

public class trough: MonoBehaviour {
	public static bool troughFull;

	public float radius = 3f;
	public GameObject carryFood;
	public Transform foodParent;


	public int startFood;

	void Start(){
		startFood = foodParent.childCount;
		Debug.Log ("Starting scene with " + startFood + " food items.");
	}


	void OnCollisionEnter (Collision col)
	{
		if (foodInteraction.handsFull) {
			if (col.gameObject.name == "Player") {
				carryFood.SetActive (false);
				foodInteraction.handsFull = false;
				startFood--;
				Debug.Log ("There are " + startFood + " food items now.");
				if (startFood == 0) {
					troughFull = true;
				}
			}
		}
	}
		
	void OnDrawGizmosSelected () {
		Gizmos.color = Color.yellow;
		Gizmos.DrawWireSphere (transform.position, radius);
	}

}
