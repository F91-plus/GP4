#include "SingleList.h"

#pragma region Note
    // 0. node�� ���� head, next
    // 1. ó���� head�� null ����Ʈ�� ǥ����, �׻� ������ next�� null�� ǥ����
    //      [head -> null]
    // 2. push �� �� ������ + next �� ��� ����
    // 3. head�� push �� �����͸� ǥ���� [head -> push(data)]
    // 4. ���� ��� push �� �� [head -> data -> data -> null] �ݺ�
    // ���γ���
    //      head�� ����Ű�� temp�� �����.
    //      push(new) data:next -> null
    //      head(temp) -> push(new)�� ����
    //      ���� temp�� �׻� ������ data�� ǥ���Ѵ�.
    //  ���γ���2
    //      []-> ����ü �����.
    //      
#pragma endregion

void SingleList::AddNode(int _data)
{
    count++;

    string* temp[3];

    if (head == nullptr)
    {
        // �� ����ü ����
        Node* N_node;
        // �� ����ü�� ������ ����
        N_node->data = _data;
        // �� ����ü�� ������ nullptr
        N_node->next = nullptr; 

        temp[0]->&N_node;

    }
    else
    {
        Node N_node;
        N_node.data = _data;
        N_node.next = nullptr;
    }

    //cout << N_node.data << endl;
    //cout << N_node.next << endl;
    //cout << head->data << endl;

}

void SingleList::InsertNode(int _index, int _data)
{
}

void SingleList::UpdateNode(int _index, int _data)
{
}

void SingleList::DeleteNodeData(int _data)
{
}

void SingleList::DeleteIndex(int _index)
{
}

void SingleList::ClearAllNode()
{
}

int SingleList::GetNodeData(int _index)
{
    return 0;
}

int SingleList::GetListSize()
{
    return 0;
}

bool SingleList::IsEmpty()
{
    return count==0;
}

void SingleList::PrintAll()
{
}

SingleList::~SingleList()
{
}
