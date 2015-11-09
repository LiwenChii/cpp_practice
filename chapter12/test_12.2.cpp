#include "exer_12.2.h"
#include <iostream>

int main()
{
	const StrBlob cstrblob{ "come", "on", "liwen" };
	StrBlob strblob{ "how", "are","you", "chii" };

	std::cout << cstrblob.front() << " " << cstrblob.back() << std::endl;
	strblob.back() = "liwen";
	strblob.pop_back();
	std::cout << strblob.front() << " " << strblob.back() << std::endl;
}