#include "CircularList.h"

void CircularList::AddNode(int _data)
{
	//1. ó���� add�� �� ���
	if (IsEmpty())
	{
		tail = new C_Node;
		tail->data = _data;
		tail->next = tail;		// �ڱ��ڽ�
	}
	else
	{
		//2. 2�� ° Add �� ���
		//- �տ� �ִ� ����ü�� �߰����ִ� �Ϳ� ���� �ؾ���
		C_Node* AddNode = new C_Node{ _data, tail };
		C_Node* temp = new C_Node;

		//tail->next = AddNode; ������ tail���� ���� �Ǿ���

		tail->next = AddNode;
		//tail = tail->next;

		//tail = tail->next;
		//tail->data = AddNode->data;

		//tail = tail->next;	// ���� ��� �̵�
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
	//cout << "tail�� ���� �ּ� : " << tail->next;
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
