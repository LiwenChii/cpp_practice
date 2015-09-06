#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void swap_the_pointer(int **p1, int **p2);

int main()
{
	int num1 = 3, num2 = 5;
	int *p1 = &num1;
	int *p2 = &num2;
	swap_the_pointer(&p1, &p2);
	cout << *p1 << " " << *p2 << endl;
	return 0;
}

void swap_the_pointer(int **p1, int **p2)
{
	int *temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}