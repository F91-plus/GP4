// GameP_04.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include "Stack.h"
#include "Stack_dynamic.h"
#include "Queue.h"
#include "Deque.h"
#include "List.h"
#include "SingleList.h"

using namespace std;

class obj
{
private:
    const char* name;
public:
    obj() = default;
    obj(const char* _name) : name(_name) { cout << name << "생성" << endl; }
    ~obj() { cout << name <<"소멸" << endl; }
};

int main()
{
    /*obj a("A");
    obj b("B");*/

	Stack stack;
	/*
	for (int i = 0; i <= MaxCount; i++)
	{
		if (stack.Push(i)) //0,1,2,3,4
		{
			cout << i << "값이 들어 갔습니다." << endl;
		}
		else // 5
		{
			cout << i << "값이 들어가지 않았습니다." << endl;
		}
	}

	int num = stack.Pop(); // 4
	cout << num << "이(가) 나왔습니다." << endl;

	num = stack.Pop(); // 3
	cout << num << "이(가) 나왔습니다." << endl;

	num = stack.Count(); // 3
	cout << "stack에" << num << "개가 남았습니다." << endl;

	num = stack.Pick();
	cout << "stack에" << num << "상단 값." << endl;

	if (!stack.IsEmpty())// stack에 3개가 있어서 == true
	{
		cout << "자료가 남아 있어 자료를 지우겠습다" << endl;
		stack.Clear(); // 자료 날라감
	}

	num = stack.Count(); // 0
	cout << "stack에" << num << "개가 남았습니다." << endl;

	cout << endl;
	cout << endl;

	*/

	Stack_dynamic stack_dynamic;
	/*
	for (int i = 0; i <= 5; i++)
	{
		if (stack_dynamic.Push(i)) //0,1,2,3,4,5
		{
			cout << i << "값이 들어 갔습니다.." << endl;
		}
		else
		{
			cout << i << "안들어가면 안되는데?" << endl;
		}
	}

	int num3 = stack_dynamic.Pop();
	cout << num3 << endl;
	num3 = stack_dynamic.Pop();
	cout << num3 << endl;

	num3 = stack_dynamic.Count();
	cout << num3 << endl;

	stack_dynamic.Clear();
	*/

	Queue Q;
	/*
	for (int i = 0; i < 5; i++)
	{
		Q.Enqueue(i);
		cout << i << "큐 값이 들어감" << endl;
	}

	int num4 = Q.Dequeue();
	cout << num4 << "큐 값이 나옴" << endl;
	num4 = Q.Dequeue();
	cout << num4 << "큐 값이 나옴" << endl;
	num4 = Q.Dequeue();
	cout << num4 << "큐 값이 나옴" << endl;
	*/

	Deque dq;
	/*
	for (int i = 0; i < 3; i++)
	{
		dq.Push_Back(i);
	}
	for (int i = 3; i < 6; i++)
	{
		dq.Push_Front(i);
	}

	int num5 = dq.Pop_Back();	//2
	cout << num5 << " Back 데큐 값이 나옴" << endl;
	num5 = dq.Pop_Back();	// 1
	cout << num5 << " Back 데큐 값이 나옴" << endl;

	num5 = dq.Pop_Front();	// 5
	cout << num5 << " Front 데큐 값이 나옴" << endl;
	num5 = dq.Pop_Front();	// 4
	cout << num5 << " Front 데큐 값이 나옴" << endl;

	dq.PrintAll();
	*/

	List list;
	/*
	for (int i = 0; i < 5; i++)
	{
		list.AddNode(i);
		cout << i << "값";
	}
	list.AddNode(1);	// 0
	list.AddNode(2);	// 1
	list.AddNode(5);	// 2
	list.InsertNode(2, 3);
	list.InsertNode(3, 4);
	list.PrintAll();

	list.UpdateNode(4, 10);
	list.PrintAll();

	list.DeleteNodeData(4);
	list.DeleteNodeData(100);//일치하는 데이터 없음
	list.PrintAll();
	
	list.DeleteIndex(0);
	list.DeleteIndex(100); //일치하는 index없음
	list.PrintAll();
	*/

	SingleList S_list;

	S_list.AddNode(1);
	S_list.AddNode(2);

	for (int i = 3; i < 10; i++)
	{
		S_list.AddNode(i);
	}

	S_list.PrintAll();

	/*
	S_list.InsertNode(0, 100);
	S_list.InsertNode(5, 100);
	S_list.PrintAll();
	*/
	for (int i = 1; i < 10; i=i+4)
	{
		S_list.InsertNode(i, 200);
	}
	S_list.PrintAll();


    return 0;
}


