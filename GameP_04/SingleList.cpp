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

    string* temp[3];

    if (head == nullptr)
    {
        // 새 구조체 선언
        Node* N_node;
        // 새 구조체에 데이터 삽입
        N_node->data = _data;
        // 새 구조체의 다음은 nullptr
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
