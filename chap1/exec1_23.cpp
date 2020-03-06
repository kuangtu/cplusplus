#include <iostream>
#include "Sales_item.h"

int
main(int argc, char *argv[]) 
{
	Sales_item curitemval, itemval;
	int icnt = 1;

	std::cin >> curitemval;

	//读取第二个对象判断isbn是否相同
	while(std::cin >> itemval)
	{
		if (curitemval.isbn() == itemval.isbn())
		{
			icnt++;
		}
		else
		{
			std::cout << curitemval.isbn() << "count is " << icnt << std::endl;
			icnt = 1;
			curitemval = itemval;
		}
	}

	std::cout << curitemval.isbn() << "count is " << icnt << std::endl;

	return 0;


}
