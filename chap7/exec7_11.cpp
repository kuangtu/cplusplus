#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;

struct Sales_data {
    Sales_data() = default;
    Sales_data(const std::string no): bookNo(no) { }
    Sales_data(const std::string no, unsigned sold,  double p):
        bookNo(no), units_sold(sold),price(p) { }

    std::string isbn() const { return  bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price()const;

    //数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double price = 0.0;
};

//非成员接口
Sales_data add(const Sales_data&, const Sales_data&);
std::ostream &print(std::ostream&, const Sales_data&);
std::istream &read(std::istream&, Sales_data&);


//基于作用域运算符::
//位于类的作用域内
double Sales_data::avg_price() const
{
    if (units_sold)
    {
        return revenue / units_sold;
    }
    else
    {
        return 0;
    }
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;

    return *this;
}

//I/O类不能被拷贝的类型
//通过引用使用
istream&
read(istream &is, Sales_data &item)
{
    double price = 0.0;
    is >> item.bookNo >> item.units_sold >> item.price;
    item.revenue = item.price * item.units_sold;

    return is;
}


ostream &
print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << " " << item.price << 
        " " << item.avg_price();

    return os;
}

Sales_data
add(const Sales_data &lhs, const Sales_data &rhs)
{
    //默认情况下，拷贝类的对象其实拷贝的是对象
    //的数据成员
    Sales_data sum = lhs;

    sum.combine(rhs);

    return sum;
}

int
main(int argc, char *argv[])
{
    Sales_data s1;
    Sales_data s2("isbn11", 10, 99);

    print(std::cout, s1);
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    print(std::cout, s2);

    return 0;
}
