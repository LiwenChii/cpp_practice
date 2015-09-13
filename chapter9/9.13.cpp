#include <iostream>
#include <list>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::vector;

int main()
{
	list<int> lst(6, 6);
	vector<int> ivec(6, 9);

	vector<double> dvec(lst.begin(), lst.end());
	for (auto d : dvec)
	{
		cout << d << " ";
	}

	cout << endl;

	vector<double> dvec1(ivec.begin(), ivec.end());
	for (auto d : dvec1)
	{
		cout << d << " ";
	}

	cout << endl;

	return 0;

}