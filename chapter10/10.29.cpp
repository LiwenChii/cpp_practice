#include <iterator>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
using std::istream_iterator;
using std::ifstream;

int main()
{
	ifstream input("./test.txt");
	istream_iterator<string> word(input);
	istream_iterator<string> eof;
	vector<string> svec(word, eof);

	for (const auto &s : svec)
	{
		cout << s << endl;
	}
}