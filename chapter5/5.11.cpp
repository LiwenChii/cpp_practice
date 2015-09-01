#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char c;
	int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	int nCnt = 0, tCnt = 0, spaceCnt = 0;
	while (cin >> std::noskipws >> c)
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

		case '\t':
			++tCnt;
			break;

		case '\n':
			++nCnt;
			break;

		case ' ':
			++spaceCnt;
			break;

		default:
			break;

		}
	}

	cout << "a:" << aCnt << "times" << endl;
	cout << "e:" << eCnt << "times" << endl;
	cout << "i:" << iCnt << "times" << endl;
	cout << "o:" << oCnt << "times" << endl;
	cout << "u:" << uCnt << "times" << endl;
	cout << "tab:" << tCnt << "times" << endl;
	cout << "newline:" << nCnt << "times" << endl;
	cout << "space:" << spaceCnt << "times" << endl;
	return 0;
}