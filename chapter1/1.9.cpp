#include <iostream>

int from50addto100(void);

int main()
{
	int result = from50addto100();
	std::cout <<"The sum from 50 add to 100 is"
			  << result << std::endl;

	return 0;
}

int from50addto100(void)
{
	int sum = 50;
	int currentval = 51;

	while (currentval != 101)
	{
		sum += currentval++;
	}

	return sum;
}