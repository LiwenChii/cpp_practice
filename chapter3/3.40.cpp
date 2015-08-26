#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char str1[10] = "abc";
	char str2[10] = "abd";
	char largestr[20];

	strcpy_s(largestr, str1);
	strcat_s(largestr, str2);

	cout << largestr << endl;
	
	return 0;
}