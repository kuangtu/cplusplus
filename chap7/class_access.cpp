#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;

class Sales_data {
	public:
		Sales_data() = default;
		Sales_data(const std::string no): bookNo(no) { }
		Sales_data(const std::string no, unsigned sold,  double p):
			bookNo(no), units_sold(sold), revenue(sold * p) { }

		std::string isbn() const { return  bookNo; }
		Sales_data& combine(const Sales_data&);
	private:
		double avg_price() const
		{
			return units_sold ? revenue / units_sold : 0;
		}
		std::string bookNo;
		unsigned units_sold = 0;
		double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

int
main(int argc, char *argv[]) 
{

	Sales_data  s1;
	Sales_data s2("isbn1024", 10, 59.9);

	cout << s2.isbn() << endl;

	return 0;
}
