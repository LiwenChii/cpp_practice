#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

void get_word_and_print(void);

int main()
{
	get_word_and_print();
	return 0;
}

void get_word_and_print(void)
{
	for (string str; cin >> str; cout << str);
}