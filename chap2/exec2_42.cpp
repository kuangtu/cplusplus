#include <iostream>
#include <string>
#include "Sales_data.h"

int
main(int argc, char *argv[]) 
{

	struct Sales_data data1, data2;

	std::cout << "Please Input data1's bookNo、units_sold、price" << std::endl;
	std::cin >> data1.bookNo >> data1.units_sold >> data1.price;

	std::cout << "Please Input data2's bookNo、units_sold、price" << std::endl;
	std::cin >> data2.bookNo >> data2.units_sold >> data2.price;

	if (data1.bookNo == data2.bookNo)
	{
		unsigned total_sold = data1.units_sold + data2.units_sold;
		double total_revenue = data1.revenue + data2.revenue;

		if (total_sold != 0)
		{
			std::cout << "the BookNo " << data1.bookNo << "total sold is " ;
			std::cout << total_sold << "total revenue is " << total_revenue ;
			std::cout << "the avarage price is " << total_revenue / total_sold << std::endl;

		}
		else
		{
			std::cout << "No sales." << std::endl;
		}

		return 0;

	}
	else
	{

		std::cerr << "Please input same bookNo " << std::endl;

		return -1;
	}


	return 0;
}
