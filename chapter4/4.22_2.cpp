#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int grade;
	while (cin >> grade)
	{
		if (grade < 60)
		{
			cout << "fail" << endl;
		}
		else if (grade >= 60 && grade < 75)
		{
			cout << "lowpass" << endl;
		}
		else if (grade >= 75 && grade < 90)
		{
			cout << "pass" << endl;
		}
		else if (grade >= 90 && grade <= 100)
		{
			cout << "highpass " << endl;
		}
	}

	return 0;

}