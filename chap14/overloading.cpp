#include <ostream>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;

class Sales_data {
    public:
        Sales_data() = default;
        Sales_data(string isbn, double price): m_Isbn(isbn), m_Price(price) { }
        string getIsbn() const { return m_Isbn; }
        double getPrice() const {return m_Price; }
		void print() const;
    private:
        string m_Isbn;
        double m_Price;
};

ostream& operator<<(ostream &os, const Sales_data &item)
{
    os << item.getIsbn() << " " << item.getPrice();

    return os;
}

int
main(int argc, char *argv[])
{
    Sales_data s("0001", 10.1);
    operator<<(cout , s);
}
