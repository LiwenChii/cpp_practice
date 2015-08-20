#include <iostream>
#include "Sales_item.h"

int countthebook(void);

int main(){
	return countthebook();
}

int countthebook(void)
{
	Sales_item total, currentitem;
	if (std::cin >> total)
	{
		while (std::cin >> currentitem)
		{
			if (currentitem.isbn() == total.isbn())
			{
				total += currentitem;
			}
			else
			{
				std::cout << total << std::endl;
				total = currentitem;
					
			}
		}
		std::cout << total << std::endl;
	}
	else
	{
		std::cout << "Error, no data." << std::endl;
		return -1;
	}
	return 0;
}