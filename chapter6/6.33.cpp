#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void print_vector_recursively( vector<int>::const_iterator, vector<int>::const_iterator);

int main()
{
	vector<int> vec1 = { 1, 4, 5, 7 };
	print_vector_recursively(vec1.cbegin(), vec1.cend());

	return 0;
}

void print_vector_recursively(vector<int>::const_iterator beg, vector<int>::const_iterator end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print_vector_recursively(++beg, end);
	}
}