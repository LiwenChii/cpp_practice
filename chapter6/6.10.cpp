#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void exchange(int *num1, int *num2);

int main()
{
	int a = 4, b = 6;
	cout << "input the two number you wanna exchange" << endl;
	cin >> a >> b;
	exchange(&a, &b);
	cout << a << " " << b;
	return 0;

}

void exchange(int *num1, int *num2)
{
	int temp = 0;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}