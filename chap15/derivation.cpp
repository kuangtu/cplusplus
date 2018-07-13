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
		virtual double net_price(size_t cnt) const { return (double)cnt * price; }
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

class Bulk_quote : public Quote {
    public:
        Bulk_quote() = default;
        Bulk_quote(const string&, double, size_t, double);

        //覆盖基类的函数
        double net_price(size_t) const override;
    private:
        size_t min_qty = 0;
        double discount = 0.0;
};

//派生类不直接初始化基类的成员，必须使用基类的构造函数进行初始化 
//首先初始化基类的部分，然后按照声明的顺序依次初始化派生类的成员
Bulk_quote::Bulk_quote(const string &book, double p, size_t qty, double disc): Quote(book, p), min_qty(qty), discount(disc) { }

double Bulk_quote::net_price(size_t cnt) const
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

int
main(int argc, char *argv[])
{
    //派生类到基类的转换
    Quote item;
    Bulk_quote bulk;

    Quote *p = &item;
    p = &bulk;

    Bulk_quote b("ISBN001", 10.5, 100, 0.1);
    cout << b.net_price(80) << endl;
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    cout << b.net_price(120) << endl;

    return 0;
}
