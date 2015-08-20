#include <iostream>
#include "Sales_item.h"

void readandprint(void);

int main()
{
	readandprint();
	return 0;
}

void readandprint(void)
{
	Sales_item book;
	std::cin >> book;
	std::cout << book << std::endl;
}
