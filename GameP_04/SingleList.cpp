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

    Node* temp = new Node[count+1];
    Node* AddNode = new Node[1];

    if (count <= 1)
    {
        head = new Node[count];

        head[count-1].data = _data;
        head[count-1].next = nullptr;
    }
    else
    {
        AddNode[0].data = _data;
        AddNode[0].next = nullptr;

        for (int i = 0; i < count-1; i++)
        {
            temp[i] = head[i];
        }
        temp[count - 1] = AddNode[0];
        temp[count - 2].next = &temp[count-1];

        delete[] head;
        head = temp;
    }
}

void SingleList::InsertNode(int _index, int _data)
{
    count++;

    if (count < _index)
    {
        _index = count;
    }

    if (count <= 1)
    {
        head = new Node[count];
        
        head[count - 1].data = _data;
        head[count - 1].next = nullptr;
    }
    else
    {
        Node* temp = new Node[count + 1];
        Node* InsertNode = new Node[1];

        InsertNode[0].data = _data;
        InsertNode[0].next = &head[_index + 1];

        if (_index == 0)
        {
            head[_index].next = nullptr;
        }
        else {
            head[_index - 1].next = nullptr;
            for (int i = 0; i < _index; i++)
            {
                temp[i] = head[i];
            }
        }
        temp[_index] = InsertNode[0];
        temp[_index - 1].next = &temp[_index];
        for (int i = _index+1; i < count+1; i++)
        {
            temp[i] = head[i-1];
        }
        delete[] head;
        head = temp;
    }
}

void SingleList::UpdateNode(int _index, int _data)
{
    //Node* UpdateNode = new Node[count];
    head[_index].data = _data;
}

void SingleList::DeleteNodeData(int _data)
{
    Node* DeleteNode = new Node[count];

    for (int i = 0; i < count; i++)
    {
        if (head[i].data == _data)
        {
            head[i - 1].next = &head[i + 1];
        }
    }
    count--;

}

void SingleList::DeleteIndex(int _index)
{
    head[_index - 1].next = &head[_index + 1];
}

void SingleList::ClearAllNode()
{
    delete[] head;
    count = 0;
}

int SingleList::GetNodeData(int _index)
{
    return head[_index].data;
}

int SingleList::GetListSize()
{
    return count;
}

bool SingleList::IsEmpty()
{
    return count==0;
}

void SingleList::PrintAll()
{
    for (int i = 0; i < count; i++)
    {
        cout << head[i].data << " ";
    }
    cout << endl;

    for (int i = 0; i < count; i++)
    {
        cout << head[i].next << " ";
    }
    cout << endl;
}

SingleList::~SingleList()
{

}
