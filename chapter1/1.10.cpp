#include <iostream>

void print0to10(void);

int main()
{
	print0to10();
	return 0;
}

void print0to10(void)
{
	int start = 10;
	while (start >= 0)
	{
		std::cout << start-- << std::endl;
	}
}