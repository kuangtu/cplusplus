#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::cerr;
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

	Sales_data data1;

		
	cout << "Please Input data's bookNo、units_sold、price" << endl;

	if (cin >> data1.bookNo >> data1.units_sold >> data1.price)
	{
		data1.revenue = data1.units_sold * data1.price;
		Sales_data tmp;
		
		while(cin >> tmp.bookNo >> tmp.units_sold >> tmp.price)
		{
			if (tmp.bookNo == data1.bookNo)
			{
				//利润增加到之前那本书中
				tmp.revenue = tmp.units_sold * tmp.price;
				data1.revenue += tmp.revenue;
				data1.units_sold += tmp.units_sold;
			}
			else
			{
				//打印之前一本书
				cout << "the BookNo " << data1.bookNo << "total sold is " ;
				cout << data1.units_sold << "total revenue is " << data1.revenue ;
				cout << "the avarage price is " << data1.revenue / data1.units_sold << endl;

				data1.bookNo = tmp.bookNo;
				data1.revenue = tmp.revenue;
				data1.price = tmp.price;
				data1.units_sold = tmp.units_sold;
			}
		}

		//输出最后一本书
		cout << "the BookNo " << data1.bookNo << "total sold is " ;
		cout << data1.units_sold << "total revenue is " << data1.revenue ;
		cout << "the avarage price is " << data1.revenue / data1.units_sold << endl;
	}
	else
	{
		cerr << "No Data input." << endl;
	}
	return 0;
}
