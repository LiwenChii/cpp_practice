#include <iostream>
#include <string>
#include <sstream>


using std::cin;
using std::cout;
using std::endl;
using std::istream;
using std::string;
using std::istringstream;

istream& read_and_reset(istream& is);

int main()
{
	istringstream iss("hello world");
	read_and_reset(iss);
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