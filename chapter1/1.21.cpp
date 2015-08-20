#include <iostream>
#include "Sales_item.h"

void addandprint(void);

int main()
{
	addandprint();
	return 0;
}

void addandprint(void)
{
	Sales_item book1, book2;

	std::cin >> book1 >> book2;
	if (book1.isbn() == book2.isbn())
	{
		std::cout << book1 + book2 << std::endl;
	}
	else
	{
		std::cout << "Isbn must be the same" << std::endl;
	}

}