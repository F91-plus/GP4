#include "Stack.h"

void Stack::Clear()
{
	for (int i = 0; i < MaxCount; i++)
	{
		data[i] = 0;
	}
	index = 0;
}

int Stack::Count()
{
	return index;
}

bool Stack::IsEmpty()
{
	//index == 0 이면 true 아니면 false
	return index == 0 ? true : false;
}

bool Stack::Push(int _data)
{
	if (index < MaxCount) {
		data[index] = _data;
		index++;	
		return true;
	}
	else
	{
		return false;
	}
}

int Stack::Pop()
{
	if (index > 0) {
		index--;
		
		return data[index];
	}
	else {
		return -1;
	}
}

int Stack::Pick()
{
	return data[index-1];
}

Stack::Stack()
{
	Clear();
}
