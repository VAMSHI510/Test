using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawn : MonoBehaviour {
	[SerializeField]GameObject[] ballObj;
	[SerializeField]Transform[] spawnPos;
	float newTime;
	[SerializeField]float spawnTime;
	[SerializeField]float minSpawnTime;
	bool isRunning;
	// Use this for initialization
	public void Start () {
		isRunning = false;
	}
	
	// Update is called once per frame
	public void Update () {
		//Spawn ball at certain interval while the interval between the spawning decreases slowly to minSpawnTime
		Player1();
		Player2();
	}
	public void Player1()
	{
		if ((Time.time - newTime) > spawnTime && isRunning)
		{
			PlayerPrefs.SetInt("PLayer", 1);
			Instantiate(ballObj[Random.Range(0, ballObj.Length)], spawnPos[Random.Range(0, spawnPos.Length)].position, Quaternion.identity);
			//Instantiate(ballObj[Random.Range(0, ballObj.Length)], spawnPos[Random.Range(0, spawnPos.Length)].position, Quaternion.identity);
			if (spawnTime > minSpawnTime)
			{
				spawnTime -= 0.1f;
			}
			newTime = Time.time;
		}
		
	}

	public void Player2()
	{

		if ((Time.time - newTime) > spawnTime && isRunning)
		{
			PlayerPrefs.SetInt("PLayer", 2);
			Instantiate(ballObj[Random.Range(0, ballObj.Length)], spawnPos[Random.Range(0, spawnPos.Length)].position, Quaternion.identity);
			Instantiate(ballObj[Random.Range(0, ballObj.Length)], spawnPos[Random.Range(0, spawnPos.Length)].position, Quaternion.identity);
			if (spawnTime > minSpawnTime)
			{
				spawnTime -= 0.1f;
			}
			newTime = Time.time;
		}
	}
	public void StopGame(){
		isRunning = false;
	}
	public void StartGame(){
		isRunning = true;
		newTime = Time.time;
		spawnTime = 3;
	}
}
