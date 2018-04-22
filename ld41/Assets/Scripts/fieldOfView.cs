using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class fieldOfView : MonoBehaviour {
	/*
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
	}*/

	public float viewRadius;
	[Range(0,360)]
	public float viewAngle;

	public LayerMask targetMask;
	public LayerMask obstacleMask;

	public float meshResolution;

	public MeshFilter viewMeshFilter;
	Mesh viewMesh;

	public float eyeLevel = .75F;
	private Vector3 eyes;


	[HideInInspector]
	public List<Transform> visibleTargets = new List<Transform>();

	void Start(){
		viewMesh = new Mesh ();
		viewMesh.name = "View Mesh";
		viewMeshFilter.mesh = viewMesh;

		StartCoroutine ("findTargetsWithDelay", .3f);
	}

	IEnumerator findTargetsWithDelay(float delay) {
		while (true) {
			yield return new WaitForSeconds (delay);
			findVisibleTargets ();

		}

	}

	void LateUpdate(){
		eyes = new Vector3(transform.position.x, transform.position.y + eyeLevel, transform.position.z);
		drawFieldOfView ();
	}

	void findVisibleTargets(){
		visibleTargets.Clear ();
		Collider[] targetsInViewRadius = Physics.OverlapSphere (eyes, viewRadius, targetMask);

		for (int i = 0; i < targetsInViewRadius.Length; i++) {
			Transform target = targetsInViewRadius [i].transform;
			Vector3 dirToTarget = (target.position - eyes).normalized;
			if (Vector3.Angle (transform.forward, dirToTarget) < viewAngle / 2) {
				float dstToTarget = Vector3.Distance (eyes, target.position);

				if (!Physics.Raycast (eyes, dirToTarget, dstToTarget, obstacleMask)) {
					//what we're doing with the target when we see it
					visibleTargets.Add (target);
				}

			}

		}
	}

	void drawFieldOfView() {
		int stepCount = Mathf.RoundToInt(viewAngle * meshResolution);
		float stepAngleSize = viewAngle / stepCount;

		List<Vector3> viewPoints = new List<Vector3> ();

		for (int i = 0; i <= stepCount; i++) {
			float angle = transform.eulerAngles.y - viewAngle / 2 + stepAngleSize * i;
			viewCastInfo newViewCast = viewCast (angle);
			viewPoints.Add (newViewCast.point);
		}

		int vertexCount = viewPoints.Count + 1;
		Vector3[] vertices = new Vector3[vertexCount];
		int[] triangles = new int[(vertexCount - 2) * 3];

		vertices [0] = Vector3.zero;
		for (int i = 0; i < vertexCount - 1; i++) {
			vertices [i + 1] = transform.InverseTransformPoint(viewPoints [i]);

			if (i < vertexCount - 2) {
				triangles [i * 3] = 0;
				triangles [i * 3 + 1] = i + 1;
				triangles [i * 3 + 2] = i + 2;
			}
		}

		viewMesh.Clear ();
		viewMesh.vertices = vertices;
		viewMesh.triangles = triangles;
		viewMesh.RecalculateNormals ();
	}

	viewCastInfo viewCast (float globalAngle){
		Vector3 dir = dirFromAngle (globalAngle, true);
		RaycastHit hit;
		if (Physics.Raycast(eyes, dir, out hit, viewRadius, obstacleMask)) {
			return new viewCastInfo(true, new Vector3(hit.point.x, hit.point.y - eyeLevel, hit.point.z), hit.distance, globalAngle);
		} else {
			return new viewCastInfo (false, transform.position + dir * viewRadius, viewRadius, globalAngle);
		}
	}

	public Vector3 dirFromAngle (float angleInDegrees, bool angleIsGlobal){
		if (!angleIsGlobal) {
			angleInDegrees += transform.eulerAngles.y;
		}
		return new Vector3 (Mathf.Sin (angleInDegrees * Mathf.Deg2Rad), 0, Mathf.Cos (angleInDegrees * Mathf.Deg2Rad));
	}

	public struct viewCastInfo {
		public bool hit;
		public Vector3 point;
		public float dst;
		public float angle;

		public viewCastInfo(bool _hit, Vector3 _point, float _dst, float _angle){
			hit = _hit;
			point = _point;
			dst = _dst;
			angle = _angle;
		}
	}

}
