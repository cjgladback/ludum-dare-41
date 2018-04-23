using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerController : MonoBehaviour {

	public float moveSpeed = 6;
	public float smoothMoveTime = .1f;
	public float turnSpeed = 8;

	float angle;
	float smoothInputMagnitude;
	float smoothMoveVelocity;
	Vector3 velocity;

	Rigidbody rgbody;
	bool disabled;

	void Start(){
		rgbody = gameObject.GetComponent<Rigidbody>();
		goatController.OnGoatSawYou += Disable;
	}

	void Update() {
		Vector3 inputDirection = Vector3.zero;
		if (!disabled) {
			inputDirection = new Vector3 (Input.GetAxisRaw ("Horizontal"), 0, Input.GetAxisRaw ("Vertical")).normalized;
		}
		float inputMagnitude = inputDirection.magnitude;
		smoothInputMagnitude = Mathf.SmoothDamp (smoothInputMagnitude, inputMagnitude, ref smoothMoveVelocity, smoothMoveTime);

		float targetAngle = Mathf.Atan2 (inputDirection.x, inputDirection.z) * Mathf.Rad2Deg;
		angle = Mathf.LerpAngle(angle, targetAngle, Time.deltaTime * turnSpeed * inputMagnitude);

		velocity = transform.forward * moveSpeed * smoothInputMagnitude;

	}

	void Disable(){
		disabled = true;
	}

	void FixedUpdate() {
		rgbody.MoveRotation (Quaternion.Euler (Vector3.up * angle));
		rgbody.MovePosition (rgbody.position + velocity * Time.deltaTime);
	}

	void OnDestroy(){
		goatController.OnGoatSawYou -= Disable;
	}
}
