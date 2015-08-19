#include <iostream>

void printthenum(int start, int end);

int main()
{
	int start_num = 0;
	int end_num = 0;

	std::cout << "please enter two integer numbers: ";
	std::cin >> start_num >> end_num;

	if (start_num > end_num)
	{
		std::swap(start_num, end_num);
	}

	printthenum(start_num, end_num);

	return 0;
}

void printthenum(int start, int end)
{
	while (start <= end)
	{
		std::cout << start++ << std::endl;
	}
}