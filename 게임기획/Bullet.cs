using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float speed = 0.01f;

    //생성될때 한번 발생
    private void Start()
    {
        //1초뒤에 불릿 게임 오브젝트를 삭제 하겠다
        Destroy(gameObject, 1f);
    }
    // Update is called once per frame
    void Update()
    {
        gameObject.transform.position = (gameObject.transform.position + gameObject.transform.forward * speed);
    }

    private void OnCollisionEnter(Collision other)//other는 충돌한 오브젝트의 정보
    {
        Destroy(other.gameObject);
    }
}
