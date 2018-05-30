#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

void f()
{
    cout << 0 << endl;
}

void f(int a)
{
    cout << a <<endl;
}

void f(int a, int b)
{
    cout << a << "-" << b << endl;
}

void f(double a, double b = 3.14)
{
    cout << a << "-" << b << endl;
}

int
main(int argc, char *argv[])
{
    double param = 5.6;
    //选了double匹配
    f(5.6);

    //二义性，编译器报错
    //f(42, 2.56);
    //二义性，编译器报错
    //f(2.56, 42);
    
    // 匹配f(int)，精确匹配
    f(42);

    //匹配f(int, int)，精确匹配
    f(42, 0);
    
    //匹配f(double, double)，精确匹配
    f(2.56, 3.14);
    return 0;
}
