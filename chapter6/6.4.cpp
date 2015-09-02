#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void interact(void);
int fact(int num);

int main()
{
	interact();
	return 0;
}

void interact(void)
{
	int val;
	cout << "please input the number: ";
	if (cin >> val)
	{
		cout << fact(val) << endl;
	}
	else
	{
		cout << "wrong input";
	}


}

int fact(int num)
{
	int result = 1;
	while (num > 1)
	{
		result *= num--;
	}
	return result;
}