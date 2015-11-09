#include <iostream>
#include <vector>

using namespace::std;

vector<int>* alloc_vec(void);
vector<int>* read_vec(vector<int>* pvec);
void print_vec(vector<int>* pvec);

int main()
{
	print_vec(read_vec(alloc_vec()));
	return 0;

}

vector<int>* alloc_vec(void)
{
	return new vector<int>;
}

vector<int>* read_vec(vector<int>* pvec)
{
	int i;
	while (cin >> i)
	{
		pvec->push_back(i);
	}
	return pvec;
}

void print_vec(vector<int>* pvec)
{
	for (auto i : *pvec)
	{
		cout << i << endl;
	}

	delete pvec;
	pvec = nullptr;
}