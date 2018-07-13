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
		virtual double all_price(size_t cnt) const { return (double)cnt * price; }
		virtual ~Quote() = default;
	private:
		string bookNo;
	protected:
		double price = 0.0;
};

class Bulk_quote: public Quote {
    public:
        Bulk_quote() = default;
        Bulk_quote(const string& book, double p, size_t qty, double disc) : Quote(book, p), min_qty(qty), discount(disc) { }
        //覆盖基类的函数
        double all_price(size_t cnt) const override
        {
            if (cnt > min_qty)
            {
                return cnt * (1 - discount) * price;
            }
            else
            {
                return cnt * price;
            }

        }
    private:
        size_t min_qty = 0;
        double discount = 0.0;
};


void print_all(ostream &os, const Quote &q, size_t qty)
{
    double total = q.all_price(qty);

    cout << "isbn: " <<  q.isbn() << "total price is: " << total << endl;
}

int
main(int argc, char *argv[])
{
    Quote q1("isbn001", 8.8);
    print_all(cout, q1, 10);

    Bulk_quote bq("isbn002", 10.5, 100, 0.1);
    print_all(cout, bq, 200);
    return 0;
}
