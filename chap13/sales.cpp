#include <iostream>
#include <string>

using std::string;

class Sales_data {
	public:
		Sales_data() = default;
		Sales_data(string no, int units, double price): bookNo(no), units_sold(units), revenue(price) { }
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
	return 0;
}


