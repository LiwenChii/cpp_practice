#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
	string rsp;
	do{
		cout << "please enter two string: ";
		string str1, str2;
		cin >> str1 >> str2;
		cout << (str1 <= str2 ? str1 : str2)
			<< "you want more? yes or no" << endl;
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] == 'y');

	return 0;
}