#pragma once
#include <iostream>
using namespace std;

#define MaxCount 5	// 고정된 배열을 만듬

class Stack
{
private:
	//[0][1][2][3][4]
	int data[MaxCount] = {};
	int index = 0; // index == 0 [21][11][5][0][0] index : 3

public:
	//자료를 지워주는 함수
	void Clear();	// 0 0 0 0 0 & index = 0;

	//현재 들어간 자료의 갯수가 몇개인지 알려주는 함수
	int Count();	// 21 11 5 0 0 return 3;

	//비어 있는지 아닌지 알려주는 함수
	bool IsEmpty();	// 0 0 0 0 0 return true; | 21 11 5 0 0 return 3;

	//값을 넣어주는 함수(_data : 추가할 데이터)
	//값이 들어가면 true
	//값이 못들어가면 false
	bool Push(int _data);	// 11 22 0 0 0 (_data == 33) => 11 22 33 0 0 return true;

	//값을 빼주는 함수
	//호출 할 때마다 하나씩 반환이 되어야 함
	//Pop할 것이 없으면 -1 or 0을 반환 
	int Pop(); // 11 22 -> 11 -> return 22;

	//제일 위에 쌓여있는 데이터 확인용
	int Pick(); // 11 22 n n n -> return 22

public:
	Stack();

};

