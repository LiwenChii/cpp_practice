#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void exchange(int &num1, int &num2);

int main()
{
	int a = 3, b = 5;
	exchange(a, b);
	cout << a << " " << b << endl;
	return 0;
}

void exchange(int &num1, int &num2)
{
	int temp = num1;
	num1 = num2;
	num2 = temp;
}