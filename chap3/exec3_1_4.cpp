#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Sales_data {
	string bookNo;
	string bookName;
	unsigned units_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

int
main(int argc, char *argv[]) 
{

	struct Sales_data data1;

	cout << "Please Input data1's bookNo、units_sold、price" << endl;
	cin >> data1.bookNo >> data1.units_sold >> data1.price;
	data1.revenue = data1.units_sold * data1.price;
	cout << data1.bookNo << data1.revenue << data1.price << endl;

	return 0;

}
