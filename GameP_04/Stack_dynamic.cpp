#include "Stack_dynamic.h"

void Stack_dynamic::Clear()
{
	//delete[] data2;
	//data2 = nullptr;	//�޸� ���� �� �����͸� �ʱ�ȭ�� ���� ����
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
	//0~\n�� �ִ°� ����? >> �ʱ�ȭ�� �ִ� ���, �ʱ�ȭ ���� ȣ���ϴ� ���, ���� �о ������ ��
	//data2[count] = _data;
	//return true;
	
	count++;

	if (IsEmpty()) {
		data3 = new int[count];		//data3 = new int; ���� ���� ����Ȱ� ����
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
			delete[] data3;		//���� �迭 ����
			data3 = nullptr;	//������ �ʱ�ȭ
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
		cout << "���� ������ �������" << endl;
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
