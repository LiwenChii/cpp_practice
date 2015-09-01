#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char c;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	
	while (cin >> c)
	{
		if (c == 'a')
		{
			++aCnt;
		}
		else if (c == 'e')
		{
			++eCnt;
		}
		else if (c == 'i')
		{
			++iCnt;
		}
		else if (c == 'o')
		{
			++oCnt;
		}
		else if (c == 'u')
		{
			++uCnt;
		}
	}

	cout << "a:" << aCnt << "times" << endl;
	cout << "e:" << eCnt << "times" << endl;
	cout << "i:" << iCnt << "times" << endl;
	cout << "o:" << oCnt << "times" << endl;
	cout << "u:" << uCnt << "times" << endl;
	return 0;
}