#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int grade;
	while (cin >> grade)
	{
		cout << (grade >= 90 ? "highpass" : (grade >= 75) ? "pass" : (grade >= 60) ? "lowpass" : "fail");
	}

	return 0;

}