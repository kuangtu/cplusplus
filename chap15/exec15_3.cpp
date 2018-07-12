#include <iostream>
#include <string>
#include <ostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class Quote {
	public:
		Quote() = default;
		Quote(const string &book, double sales_price):bookNo(book), price(sales_price) { }
		string isbn() const { return bookNo; }
		virtual double net_price(size_t n) const { return (double)n * price; }
		virtual ~Quote() = default;
		double print_all(ostream &s, size_t n);
	private:
		string bookNo;
	protected:
		double price = 0.0;
};

double Quote::print_all(ostream &s, size_t n)
{
	double total = net_price(n);
	s << "ISBN" << bookNo << endl;
	s << "total" << total << endl;

	return total;
}

int
main(int argc, char *argv[]) 
{
	Quote q("1234", 10);

	cout << q.isbn() << endl;

	return 0;

}
