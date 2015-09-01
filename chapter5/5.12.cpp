#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	char c;
	char prec = '\0';
	unsigned aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
	unsigned tabCnt = 0, newlineCnt = 0, spaceCnt = 0;
	unsigned ffCnt = 0, fiCnt = 0, flCnt = 0;

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
			if (prec == 'f')
			{
				++fiCnt;
			}
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
			++tabCnt;
			break;

		case '\n':
			++newlineCnt;
			break;

		case ' ':
			++spaceCnt;
			break;

		case 'f':
			if (prec == 'f')
			{
				++ffCnt;
			}
			break;

		case 'l':
			if (prec == 'f')
			{
				++flCnt;
			}
			break;
		}
		prec = c;
	}

	cout << "Number of vowel a(A): \t" << aCnt << '\n'
		<< "Number of vowel e(E): \t" << eCnt << '\n'
		<< "Number of vowel i(I): \t" << iCnt << '\n'
		<< "Number of vowel o(O): \t" << oCnt << '\n'
		<< "Number of vowel u(U): \t" << uCnt << '\n'
		<< "Number of space: \t" << spaceCnt << '\n'
		<< "Number of tab char: \t" << tabCnt << '\n'
		<< "Number of new line: \t" << newlineCnt << '\n'
		<< "Number of ff: \t" << ffCnt << '\n'
		<< "Number of fl: \t" << flCnt << '\n'
		<< "Number of fi: \t" << fiCnt << endl;
}