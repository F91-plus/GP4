using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Bullet : MonoBehaviour
{
    public float speed = 0.01f;

    //�����ɶ� �ѹ� �߻�
    private void Start()
    {
        //1�ʵڿ� �Ҹ� ���� ������Ʈ�� ���� �ϰڴ�
        Destroy(gameObject, 1f);
    }
    // Update is called once per frame
    void Update()
    {
        gameObject.transform.position = (gameObject.transform.position + gameObject.transform.forward * speed);
    }

    private void OnCollisionEnter(Collision other)//other�� �浹�� ������Ʈ�� ����
    {
        Destroy(other.gameObject);
    }
}
