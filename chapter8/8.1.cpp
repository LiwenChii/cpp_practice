#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;

istream& read_and_reset(istream& is);

int main()
{
	istream& istr = read_and_reset(cin);
	cout << istr.rdstate() << endl;
	return 0;
}

istream& read_and_reset(istream& is)
{
	string buffer;
	while (is >> buffer)
	{
		cout << buffer << " ";
	}
	is.clear();
	return is;
}