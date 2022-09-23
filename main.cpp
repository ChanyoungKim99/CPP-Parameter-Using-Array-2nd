#include <iostream>

// 매개변수로 배열을 받을 때, 배열의 크기가 몇개인지 받지 않는다
// 따라서, 배열을 매개변수로 넘겨줄 때는, 
// 반드시 같이 배열의 크기를 따로 넘겨줘야 한다.

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