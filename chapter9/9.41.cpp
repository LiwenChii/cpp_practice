#include <vector>
#include <string>
#include <iostream>

using std::vector;
using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{
	vector<char> chvec = { 'h', 'e', 'l', 'l' };
	string str(chvec.begin(), chvec.end());
	
	cout << str << endl;

	return 0;
}