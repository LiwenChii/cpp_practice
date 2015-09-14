#include <vector>
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
	vector<string> strVec= { "12", "34", "99" };
	double sum = 0;
	for (auto s : strVec)
	{
		sum += stod(s);
	}
	cout << sum << endl;

	return 0;
}