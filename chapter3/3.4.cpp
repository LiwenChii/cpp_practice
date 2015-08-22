#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::string;

void compare_string_and_print(void);

int main()
{
	compare_string_and_print();
	return 0;
}

void compare_string_and_print(void)
{
	string str1, str2;
	if (cin >> str1 >> str2)
	{
		if (str1 > str2)
		{	
			cout << str1 << endl;	
		}	
		else if(str2 > str1)
		{	
			cout << str2 << endl;	
		}		
		
	}
	else
	{
		cout << "no input??" << endl;
	}
}