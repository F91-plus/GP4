#include "Stack_dynamic.h"

void Stack_dynamic::Clear()
{
	//delete[] data2;
	//data2 = nullptr;	//메모리 해제 후 포인터를 초기화해 접근 방지
	if (data3 != nullptr)
	{
		delete[] data3;
		data3 = nullptr;

		count = 0;
	}

}

int Stack_dynamic::Count()
{
	return count;
}

bool Stack_dynamic::IsEmpty()
{
	//return data == nullptr;
	return count==0;
}

bool Stack_dynamic::Push(int _data)
{
	//0~\n이 있는거 같음? >> 초기화시 넣는 경우, 초기화 없이 호출하는 경우, 파일 읽어서 저장할 떄
	//data2[count] = _data;
	//return true;
	
	count++;

	if (IsEmpty()) {
		data3 = new int[count];		//data3 = new int; 보다 지금 적용된게 좋음
		data3[count-1] = _data;	//*data3 = _data;

		return true;
	}
	else
	{
		//int* temp = new int;
		int* temp = new int[count];	
		
		if (data3 != nullptr) {
			for (int i = 0; i < count - 1; i++)
			{
				temp[i] = data3[i];
				//temp[0] = data3[0];	//temp[0] = *data3;
			}
			delete[] data3;		//기존 배열 해제
			data3 = nullptr;	//포인터 초기화
		}
		temp[count-1] = _data;

		data3 = temp;

		return true;
	}
}

int Stack_dynamic::Pop()
{
	if (IsEmpty())
	{
		cout << "현재 스택이 비어있음" << endl;
		return -1;
	}

	count--;

	int pop = data3[count];

	if (count == 0) {
		delete[] data3;
		data3 = nullptr;
	}
	else
	{
		int* temp = new int[count];

		for (int i = 0; i < count; i++)
		{
			temp[i] = data3[i];
		}
		delete[] data3;
		data3 = temp;
	}
	return pop;
}

Stack_dynamic::Stack_dynamic()
{
	data3 = nullptr;
	count = 0;
}

Stack_dynamic::~Stack_dynamic()
{
	if (data3 != nullptr)
	{
		delete[] data3;
		data3 = nullptr;
	}
	Clear();
}
