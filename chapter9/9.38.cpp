#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

int main()
{
	vector<int> ivec(50);
	cout << "size: " << ivec.size() << " "
		<< "capacity: " << ivec.capacity() << endl;
	int i = 9;
	ivec.push_back(i);
	cout << "size: " << ivec.size() << " "
		<< "capacity: " << ivec.capacity() << endl;
	ivec.push_back(i);
	cout << "size: " << ivec.size() << " "
		<< "capacity: " << ivec.capacity() << endl;
	return 0;
}