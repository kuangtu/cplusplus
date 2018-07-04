#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Sales_data {
	public:
		Sales_data() = default;
		Sales_data(string no, int units, double price): bookNo(no), units_sold(units), revenue(price) { }
		//拷贝构造函数
		Sales_data(const Sales_data &orig): bookNo(orig.bookNo), units_sold(orig.units_sold), revenue(orig.revenue) { }
		string getBookNo() {
			return bookNo;
		}

		double getRevenue() {
			return revenue;
		}
	private:
		string bookNo;
		int units_sold = 0;
		double revenue = 0.0;
};


int
main(int argc, char *argv[]) 
{
	Sales_data data1("0001", 100, 10.1);
	Sales_data data2(data1);

	cout << data2.getRevenue() << endl;

	return 0;
}


