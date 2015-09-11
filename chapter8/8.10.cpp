#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int main()
{
	std::ifstream input("./data.txt");
	string line;
	vector<string> vec;
	if (input)
	{
		while (getline(input, line))
		{
			vec.push_back(line);
		}
		
		for (const auto &s : vec)
		{
			std::istringstream ist(s);
			string word;
			while (ist >> word)
			{
				cout << word << endl;
			}
		}
	}
	else
	{
		std::cerr << "no data?" << endl;
		return -1;
	}
}