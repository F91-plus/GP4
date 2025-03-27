#include "CircularList.h"

void CircularList::AddNode(int _data)
{
	//1. 처음에 add를 할 경우
	if (IsEmpty())
	{
		tail = new C_Node;
		tail->data = _data;
		tail->next = tail;		// 자기자신
	}
	else
	{
		//2. 2번 째 Add 할 경우
		//- 앞에 있는 구조체를 추가해주는 것에 연결 해야함
		C_Node* AddNode = new C_Node{ _data, tail };
		C_Node* temp = new C_Node;

		//tail->next = AddNode; 마지막 tail에서 실행 되야함

		tail->next = AddNode;
		//tail = tail->next;

		//tail = tail->next;
		//tail->data = AddNode->data;

		//tail = tail->next;	// 다음 노드 이동
		//AddNode->next = tail;
		//tail = AddNode;
	}
}

void CircularList::InsertNode(int _index, int _data)
{
}

void CircularList::UpdateNode(int _index, int _data)
{
}

void CircularList::DeleteNodeData(int _data)
{
}

void CircularList::DeleteIndex(int _index)
{
}

void CircularList::ClearAllNode()
{
}

int CircularList::GetNodeData(int _index)
{
	return 0;
}

bool CircularList::IsEmpty()
{
	return tail == nullptr ? true : false;
}

void CircularList::PrintAll()
{
	cout << "Tail : ";

	for (int i = 0; i < 4; i++)
	{
		cout << tail->data << " ";

		tail = tail->next;
	}

	cout << endl;
	//cout << "tail의 다음 주소 : " << tail->next;
}

int CircularList::Count()
{
	if (tail->data == NULL) {
		return 0;
	}

	int count = 0;

	while (tail->data == tail->next->data) {
		count++;
		tail = tail->next;
	}

	return count;

}

CircularList::CircularList()
{
	tail = nullptr;
}

CircularList::~CircularList()
{
}
