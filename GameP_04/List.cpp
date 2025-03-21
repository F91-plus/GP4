#include "List.h"

void List::AddNode(int _data)
{
    count++;
    if (IsEmpty()) {
        *data = _data;
    }

    int* temp = new int[count];

    for (int i = 0; i < count-1; i++)
    {
        temp[i] = data[i];
    }
    temp[count-1] = _data;
    delete[] data;
    data = temp;
}

void List::InsertNode(int _index, int _data)//2
{
    count++; //count 3 > 4 

    if (count < _index)
    {
        return;
    }

    int* temp = new int[count]; // 4 : 0123

    for (int i = 0; i < _index; i++) //0,1
    {
        temp[i] = data[i];
    }
    for (int i = _index; i < count; i++)//
    {
        temp[_index+1] = data[_index];
    }
    temp[_index] = _data;//2

    delete[] data;
    data = temp;
}

void List::InsertNode(int _index, int _count, int _data)
{
    for (int i = 0; i < _count; i++)
    {
        InsertNode(_index, _data);
    }   // 속도가 느림, 빠른걸로 구현해보기
}

void List::UpdateNode(int _index, int _data)
{
    int* temp = new int[count];

    for (int i = 0; i < count; i++)
    {
        temp[i] = data[i];
    }
    temp[_index] = _data;

    delete[] data;
    data = temp;
}

void List::DeleteNodeData(int _data)
{
    
    count--;

    int* temp = new int[count+1];
    int check_data = count;

    for (int i = 0; i < count+1; i++)
    {
        if (data[i]==_data)
        {
            data[i] == NULL;
            check_data = i;
        }
    }

    if (check_data == count)
    {
        cout << _data << "와 일치하는 데이터가 없습니다." << endl;
        count++;
        return;
    }

    for (int i = 0; i < check_data; i++)
    {
        temp[i] = data[i];
    }
    for (int i = check_data; i < count; i++)
    {
        temp[i] = data[i + 1];
    }
    delete[] data;
    data = temp;
}

void List::DeleteIndex(int _index)
{
    //초기화 추가가 필요할 듯
    if (count < _index)
    {
        cout<< _index << "에 해당되는 index가 없습니다." << endl;
        return;
    }

    count--;

    int* temp = new int[count + 1];

    for (int i = 0; i < count; i++)
    {
        if (data[i] == data[_index]) {
            data[i] = 0;
        }
    }
    for (int i = 0; i < _index; i++)
    {
        temp[i] = data[i];
    }
    for (int i = _index; i < count; i++)
    {
        temp[i] = data[i + 1];
    }
    delete[] data;
    data = temp;
}

void List::ClearAllNode()
{
    if (data != nullptr)
    {
        delete[] data;
        data = nullptr;

        count = 0;
    }
}

int List::GetNodeData(int _index)
{
    return data[_index];
}

int List::GetListSize()
{
    return count;
}

bool List::IsEmpty()
{
    //return data == nullptr;
    return count==0;
}

void List::PrintAll()
{
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << " ";
    }
    cout << endl;
}

List::List()
{
    data = nullptr;
    count = 0;
}

List::~List()
{
    if (data !=nullptr)
    {
        delete[] data;
        data = nullptr;
    }
}
