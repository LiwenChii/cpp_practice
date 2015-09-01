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
		switch (c)
		{
		case 'a':
		case 'A':
			++aCnt;
			break;

		case 'e':
		case 'E':
			++eCnt;
			break;

		case 'i':
		case 'I':
			++iCnt;
			break;

		case 'o':
		case 'O':
			++oCnt;
			break;

		case 'u':
		case 'U':
			++uCnt;
			break;
			
		}
	}

	cout << "a:" << aCnt << "times" << endl;
	cout << "e:" << eCnt << "times" << endl;
	cout << "i:" << iCnt << "times" << endl;
	cout << "o:" << oCnt << "times" << endl;
	cout << "u:" << uCnt << "times" << endl;
	return 0;
}