#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "int: " << sizeof(int) << "bytes" << endl;
	cout << "long: " << sizeof(long) << "bytes" << endl;
	cout << "short: " << sizeof(short) << "bytes" << endl;
	cout << "char: " << sizeof(char) << "bytes" << endl;
	cout << "long long: " << sizeof(long long) << "bytes" << endl;
	cout << "bool: " << sizeof(bool) << "bytes" << endl;
	cout << "wchar: " << sizeof(wchar_t) << "bytes" << endl;
	cout << "char16_t: " << sizeof(char16_t) << "bytes" << endl;
	cout << "char32_t: " << sizeof(char32_t) << "bytes" << endl;
	cout << "longdouble: " << sizeof(long double) << "bytes" << endl;

	return 0;
}