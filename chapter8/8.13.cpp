#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <vector>

using std::vector; 
using std::string; 
using std::cin; 
using std::istringstream;
using std::ostringstream; 
using std::ifstream;
using std::cerr; 
using std::cout;
using std::endl;


struct PersonInfo {
	string name;
	vector<string> phones;
};

int valid(const string& str)
{
	for (auto c : str)
	{
		if (!isdigit(c))
			return 0;
	}
	return 1;
}

string format(const string& str)
{
	return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
	ifstream input("./people.txt");
	if (!input)
	{
		cerr << "no data?!" << endl;
		return -1;
	}

	string line, word;
	vector<PersonInfo> people;
	std::istringstream record;
	while (getline(input, line))
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
		ostringstream formatted, badNums;
		for (const auto &nums : p.phones)
		{
			if (!valid(nums))
			{
				badNums << " " << nums;
			}
			else
			{
				formatted << " " << format(nums);
			}
		}
		if (badNums.str().empty())
		{
			cout << p.name << " "
				<< formatted.str() << endl;
		}
		else
		{
			cerr << "input error: " << p.name
				<< "invalid number(s) " << badNums.str() << endl;
		}
	}

	return 0;
}