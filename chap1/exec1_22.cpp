#include <iostream>
#include "Sales_item.h"

int
main(int argc, char *argv[]) 
{
	Sales_item book1, book2;

	std::cin >> book1;

	//读取第二个对象判断isbn是否相同
	while(std::cin >> book2)
	{
		if (book1.isbn() == book2.isbn())
		{
			book1 += book2;
			std::cout << book1 << std::endl;
		}
		else
		{
			std::cout << "The first item isbn is " << book1.isbn() << std::endl;
			std::cout << "Please input same isbn item."  << std::endl;
		}
	}

	std::cout << book1 << std::endl;

	return 0;


}
