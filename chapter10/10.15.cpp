#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void test_lambda(int a, int b);

int main()
{
	int num1, num2;
	cout << "please input two numbers..." << endl;
	cin >> num1 >> num2;
	test_lambda(num1, num2);
	return 0;
}

void test_lambda(int a, int b)
{
	auto f = [a](int b){return a + b; };
	cout << f(b) << endl;
}