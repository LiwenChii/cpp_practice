#include <iostream>
#include <string>
#include <vector>
#include <map>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;
using std::map;

int main()
{
	string fam;
	string which_fam;
	string name;
	map<string, vector<string>> family;
	cout << "please add some new family.." << endl;
	for (cin >> fam; fam != "q";cin >> fam)
	{ 
		family[fam];
	}

	cout << "which family and what name you wanna add?" << endl;
	while (cin >> which_fam >> name)
	{
		family[which_fam].push_back(name);
	}

	for (auto f : family)
	{
		cout << f.first << " ";
		for (auto n : f.second)
		{
			cout << n << " ";
		}
		cout << endl;
	}
}