#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

struct PersonInfo{
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	std::istringstream record;
	while (getline(cin, line))
	{
		PersonInfo info;
		string phones;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> phones)
		{
			info.phones.push_back(phones);
		}
		people.push_back(info);
	}

	for (const auto &p : people)
	{
		cout << "name: " << p.name << " ";
		for (const auto &ph : p.phones)
		{
			cout << "phones: " << ph << endl;
		}
	}

	return 0;
}