#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Sales_data {
	std::string bookNo;
	std::string bookName;
	unsigned units_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

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
		
		data1.revenue = data1.units_sold * data1.price;
		data2.revenue = data2.units_sold * data2.price;

		unsigned total_sold = data1.units_sold + data2.units_sold;
		double total_revenue = data1.revenue + data2.revenue;

		std::cout << "the BookNo " << data1.bookNo << "total sold is " ;
		std::cout << total_sold << "total revenue is " << total_revenue ;
		std::cout << "the avarage price is " << total_revenue / total_sold << std::endl;
			
	}
	else
	{
		std::cout << "Please input same bookNo " << std::endl;
	}

	return 0;

}
