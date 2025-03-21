#pragma once
#include <iostream>
using namespace std;

class Stack_dynamic
{
private:
	//int* data = (int*)malloc(sizeof(int));	// C스타일 할당
	int* data2 = new int[0];
	int* data3;
	int count = 0;

public:
	void Clear();
	int Count();
	bool IsEmpty();
	bool Push(int _data);
	int Pop();

public:
	Stack_dynamic();
	~Stack_dynamic();

};

