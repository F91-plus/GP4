#include "SingleList.h"

#pragma region Note
    // 0. node의 구조 head, next
    // 1. 처음에 head는 null 포인트를 표시함, 항상 마지막 next는 null을 표시함
    //      [head -> null]
    // 2. push 할 때 데이터 + next 를 들고 붙음
    // 3. head는 push 된 데이터를 표시함 [head -> push(data)]
    // 4. 이후 계속 push 할 때 [head -> data -> data -> null] 반복
    // 세부내용
    //      head를 가르키는 temp를 만든다.
    //      push(new) data:next -> null
    //      head(temp) -> push(new)로 연결
    //      이후 temp는 항상 마지막 data를 표시한다.
    //  세부내용2
    //      []-> 구조체 만든다.
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
