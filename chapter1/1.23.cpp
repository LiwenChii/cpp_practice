#include <iostream>
#include "Sales_item.h"

void countthebook(void);

int main(){
	countthebook();
	return 0;
}

void countthebook(void)
{
	Sales_item val, currentitem;
	if (std::cin >> currentitem)
	{
		int cnt = 1;
		while (std::cin >> val)
		{
			if (currentitem.isbn() == val.isbn())
			{
				cnt++;
			}
			else
			{
				std::cout << currentitem << "occur" 
					<< cnt << "times" << std::endl;
				currentitem = val;
				cnt = 1;
			}
		}
		std::cout << currentitem << std::endl;
	}
	else
	{
		std::cout << "Error, no data." << std::endl;
	}
}