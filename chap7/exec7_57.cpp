#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;
using std::vector;

class Account {
    public:
        void caculate() {
            amount += amount * interestRate;
        }
        static double rate() {
            return interestRate;
        }
        static void rate(double);
    private:
        std::string owner;
        double amount;
        //数据成员，属于Account类，所有对象共享
        static double interestRate;
        static double initRate();
};


//在类的外部定义静态成员
//此时不能重复static关键字
void Account::rate(double newRate) 
{
    interestRate = newRate;
}

double Account::initRate()
{
    interestRate = 6.8;
}


int
main(int argc, char *argv[])
{
    //使用作用域运算符直接访问静态成员
    double r;
    r = Account::rate();

    //同样可以使用类的对象、引用或者指针来访问静态成员
    Account ac1;

    r = ac1.rate();

    return 0;
}
