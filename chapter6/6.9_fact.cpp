#include "Chapter6.h"
#include <iostream>

using std::cin;
using std::cout;
using std::endl;


int fact(int num)
{
	int result = 1;
	while (num > 1)
	{
		result *= num--;
	}
	return result;
}


void interact(void)
{
	int number;
	cout << "input the number you wanna count...." << endl;
	cin >> number;
	int val = fact(number);
	cout << val;
}