#include <iostream>
#include <vector>
#include <memory>

using namespace::std;

shared_ptr<vector<int>> alloc_vec(void);
shared_ptr<vector<int>> read_vec(shared_ptr<vector<int>> spvec);
void print_vec(const shared_ptr<vector<int>> spvec);


int main()
{
	print_vec(read_vec(alloc_vec()));
	return 0;

}

shared_ptr<vector<int>> alloc_vec(void)
{
	return make_shared<vector<int>>();
}

shared_ptr<vector<int>> read_vec(shared_ptr<vector<int>> spvec)
{
	int i;
	while (cin >> i)
	{
		spvec->push_back(i);
	}
	return spvec;
}

void print_vec(const shared_ptr<vector<int>> spvec)
{
	for (auto i : *spvec)
	{
		cout << i << endl;
	}
}