#include "Queue.h"

void Queue::Clear()
{
	data = nullptr;
	count = 0;
}

int Queue::Count()
{
	return count;
}

bool Queue::IsEmpty()
{
	return count == 0;
}

void Queue::Enqueue(int _data)
{
	count++;
	int* temp = new int[count];

	if (IsEmpty()) {
		temp[0] = _data;
	}
	else {
		for (int i = 0; i < count-1; i++)
		{
			temp[i] = data[i];
		}
		
		temp[count-1] = _data;
		delete[] data;
	}
	data = temp;

	//===



}

int Queue::Dequeue()
{
	int dequeue = data[0];
	int* temp = new int[count-1];

	for (int i = 0; i < count; i++)
	{
		temp[i] = data[i + 1];
	}
	delete[] data;
	data = temp;

	count--;

	return dequeue;
}

Queue::Queue()
{
	data = nullptr;
	count = 0;
}

Queue::~Queue()
{
	for (int i = 0; i < count; i++)
	{
		cout << data[i] << "~~";
	}
}
