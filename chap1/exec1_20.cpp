#include <iostream>
#include "Sales_item.h"

int
main(int argc, char *argv[]) 
{
	Sales_item book;

	while(std::cin >> book)
	{
		std::cout << book << std::endl;
	}

	return 0;


}
