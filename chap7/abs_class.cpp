#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;


//数据抽象依赖接口和实现分离的技术
//封装实现了类的接口和实现的分离，封装后的类隐藏了他的实现细节


//定义和声明成员函数的方式和普通函数差不多。
//成员函数的声明必须在类的内部，定义可以在类的内部或者外部。

struct Sales_data {
    std::string isbn() const { return  bookNo; }
    Sales_data& combine(const Sales_data&);
    double avg_price()const;

    //数据成员
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
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
    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;

    return is;
}


ostream &
print(ostream &os, const Sales_data &item)
{
    os << item.isbn() << " " << item.units_sold << " "
        << item.revenue << " " << item.avg_price();

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
    read(std::cin, s1);
    print(std::cout, s1);

    return 0;
}
