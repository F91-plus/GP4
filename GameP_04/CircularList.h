#pragma once
#include <iostream>

using namespace std;

struct C_Node
{
	int data;
	C_Node* next;
};

class CircularList
{
public:
	C_Node* tail;
public:
	void AddNode(int _data);
	void InsertNode(int _index, int _data);
	void UpdateNode(int _index, int _data);
	void DeleteNodeData(int _data);
	void DeleteIndex(int _index);
	void ClearAllNode();
	int GetNodeData(int _index);
	bool IsEmpty();
	void PrintAll();
	int Count();
public:
	CircularList();
	~CircularList();
};
