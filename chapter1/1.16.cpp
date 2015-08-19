#include <iostream>

int sum(void);

int main()
{
	int result = sum();
	std::cout << result;
	return 0;
}

int sum(void)
{
	int sum = 0;
	int val = 0;
	while (std::cin >> val)
	{
		sum += val;
	}
	
	return sum;
}