#include <iostream>

// �Ű������� �迭�� ���� ��, �迭�� ũ�Ⱑ ����� ���� �ʴ´�
// ����, �迭�� �Ű������� �Ѱ��� ����, 
// �ݵ�� ���� �迭�� ũ�⸦ ���� �Ѱ���� �Ѵ�.

// int Sum(int input[])
int Sum(int* input, int size)
{
	int sum{};

	for (int i = 0; i < size; i++)
	{
		sum += input[i];
	}

	return sum;
}


int main()
{
	int array[3]{ 1, 2, 3 };

	std::cout << Sum(array, 3) << std::endl;
}