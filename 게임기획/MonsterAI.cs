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

    //�����Ӵ� ȣ�� 1��60�� 
    void Update()
    {
        //�÷��̾� ���� ������Ʈ�� ������ �ؿ� �ڵ带 �������� �ʰڴ�
        if (Player == null)
            return;

        //1.����

        //���Ͱ� �÷��̾��� ��ġ�� �ٶ󺻴�
        gameObject.transform.LookAt(Player.transform.position);

        //2.�÷��̾� ����

        //�÷��̾�� ���� ������ �Ÿ��� ���Ѵ�
        float distance = Vector3.Distance(Player.transform.position, gameObject.transform.position);

        if (distance < radius)
        {
            //������ ���� ��ǥ ���� foward �������� ��ġ�� �̵���Ų��.
            gameObject.transform.position = (gameObject.transform.position + gameObject.transform.forward * speed);
        }

        //3.����

        if (attackCoolTime < Time.time - lastAttackTime)
        {
            lastAttackTime = Time.time;

            //�Ҹ� ������Ʈ�� �����Ѵ�(��ġ�� ȸ������ ������ ������)
            Instantiate(bullet,gameObject.transform.position + Vector3.up+gameObject.transform.forward,gameObject.transform.rotation);
        }

        //4.���
    }

    void OnDrawGizmos()
    {
        //����� ���� ���������� �Ѵ�.
        Gizmos.color =new Color(1,0,0,0.25f);
        //�������� ����� �׸���(���� �߽��� ����,������ 5)
        Gizmos.DrawSphere(gameObject.transform.position, radius);
    }
}
