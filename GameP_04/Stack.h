#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5	// ������ �迭�� ����

class Stack
{
private:
	//[0][1][2][3][4]
	int data[MaxCount] = {};
	int index = 0; // index == 0 [21][11][5][0][0] index : 3

public:
	//�ڷḦ �����ִ� �Լ�
	void Clear();	// 0 0 0 0 0 & index = 0;

	//���� �� �ڷ��� ������ ����� �˷��ִ� �Լ�
	int Count();	// 21 11 5 0 0 return 3;

	//��� �ִ��� �ƴ��� �˷��ִ� �Լ�
	bool IsEmpty();	// 0 0 0 0 0 return true; | 21 11 5 0 0 return 3;

	//���� �־��ִ� �Լ�(_data : �߰��� ������)
	//���� ���� true
	//���� ������ false
	bool Push(int _data);	// 11 22 0 0 0 (_data == 33) => 11 22 33 0 0 return true;

	//���� ���ִ� �Լ�
	//ȣ�� �� ������ �ϳ��� ��ȯ�� �Ǿ�� ��
	//Pop�� ���� ������ -1 or 0�� ��ȯ 
	int Pop(); // 11 22 -> 11 -> return 22;

	//���� ���� �׿��ִ� ������ Ȯ�ο�
	int Pick(); // 11 22 n n n -> return 22

public:
	Stack();

};

