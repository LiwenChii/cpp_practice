#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector; 
using std::cin;
using std::cout;
using std::endl;

void print_all_things(void);

int main()
{
	print_all_things();
	return 0;
}

void print_all_things(void)
{
	vector<int> v1;
	vector<int> v2(10);
	vector<int> v3(10, 42);
	vector<int> v4{ 10 };
	vector<int> v5{ 10, 42 };
	vector<string> v6{ 10 };
	vector<string> v7{ 10, "hi" };

	cout << "v1 size:";
	cout << v1.size();
	cout << " value:";
	if (v1.empty()){
		cout << "no value!" << endl;
	}




}