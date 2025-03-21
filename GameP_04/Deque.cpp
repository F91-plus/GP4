#include "Deque.h"

void Deque::Push_Back(int num)
{
    count++;
    int* temp = new int[count];

    if (isEmpty())
    {
        temp[0] = num;
    }

    for (int i = 0; i < count-1; i++)
    {
        temp[i] = data[i];
    }
    delete[] data;

    temp[count-1] = num;
    data = temp;
}

void Deque::Push_Front(int num)
{
    count++;
    int* temp = new int[count+1];

    if (isEmpty())
    {
        temp[0] = num;
    }

    for (int i = 0; i < count-1; i++)
    {
        temp[i + 1] = data[i];
    }
    delete[] data;

    temp[0] = num;
    data = temp;
}

int Deque::Pop_Back()
{
    count--;
    int* temp = new int[count];
    int popBack = data[count];

    for (int i = 0; i < count; i++)
    {
        temp[i] = data[i];
    }
    delete[] data;
    data = temp;

    return popBack;
}

int Deque::Pop_Front()
{
    count--;
    int* temp = new int[count];
    int popFront = data[0];

    for (int i = 0; i < count; i++)
    {
        temp[i] = data[i+1];
    }
    delete[] data;
    data = temp;

    return popFront;
}

bool Deque::isEmpty()
{
    return count == 0;
}

void Deque::Clear()
{
    if (data != nullptr) {
        delete[] data;
        data = nullptr;
    }
}

int Deque::Count()
{
    return count;
}

void Deque::PrintAll()
{
    for (int i = 0; i < count; i++)
    {
        cout << data[i] << "-";
    }
}

Deque::Deque()
{
    data = nullptr;
    count = 0;
}

Deque::~Deque()
{
    if (data != nullptr) {
        delete[] data;
        data = nullptr;
    }
    Clear();
}
