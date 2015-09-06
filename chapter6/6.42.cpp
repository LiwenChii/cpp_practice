#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string make_plural(size_t ctr, const string &word, const string &ending);


int main()
{
	size_t count = 2;
	string str = make_plural(count, "success", "es");
	cout << str << endl;
	return 0;
}

string make_plural(size_t ctr, const string &word, const string &ending = "s")
{
	return(ctr > 1) ? word + ending : word;
}
