using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MonsterAI : MonoBehaviour
{
    public GameObject Player;
    public GameObject bullet;
    public float speed=0.01f;
    public float radius = 5.0f;

    public float attackCoolTime = 2.0f;
    float lastAttackTime = 0.0f;
    // Update is called once per frame

    //프레임당 호출 1초60번 
    void Update()
    {
        //플레이어 게임 오브젝트가 없을때 밑에 코드를 실행하지 않겠다
        if (Player == null)
            return;

        //1.응시

        //몬스터가 플레이어의 위치를 바라본다
        gameObject.transform.LookAt(Player.transform.position);

        //2.플레이어 추적

        //플레이어와 몬스터 사이의 거리를 구한다
        float distance = Vector3.Distance(Player.transform.position, gameObject.transform.position);

        if (distance < radius)
        {
            //몬스터의 로컬 좌표 기준 foward 방향으로 위치를 이동시킨다.
            gameObject.transform.position = (gameObject.transform.position + gameObject.transform.forward * speed);
        }

        //3.공격

        if (attackCoolTime < Time.time - lastAttackTime)
        {
            lastAttackTime = Time.time;

            //불릿 오브젝트를 생성한다(위치와 회전값은 몬스터의 값으로)
            Instantiate(bullet,gameObject.transform.position + Vector3.up+gameObject.transform.forward,gameObject.transform.rotation);
        }

        //4.사망
    }

    void OnDrawGizmos()
    {
        //기즈모 색을 빨간색으로 한다.
        Gizmos.color =new Color(1,0,0,0.25f);
        //구형태의 기즈모를 그린다(구의 중심은 몬스터,반지름 5)
        Gizmos.DrawSphere(gameObject.transform.position, radius);
    }
}
