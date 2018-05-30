#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;

//返回引用
//返回类型均为引用，不会拷贝string对象
const string&
shorterString(const string& s1, const string& s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}


//引用返回左值
char &get_val(string &str, string::size_type ix)
{
    return str[ix];
}

int
fact(int factor)
{
    int ret = 1;
    while(factor > 1)
    {
        ret *= factor--;
    }
    
    return ret;
}

//内联函数，调用点上“内联地”展开
inline const string&
shorterString1(const string &s1, const string &s2)
{
    return s1.size() <= s2.size() ? s1 : s2;
}

//constexpr函数，用于常量表达式的函数，约定：
//（1）函数的返回类型以及所有形参的类型都是字面值类型
//（2）函数体中必须有一条return语句
constexpr int 
new_sz()
{
    return 1;
}

//constexpr int foo = new_sz();
//运行constexpr函数的返回值并非一个常量
//如果arg是常量表达式，则scale(arg)也是常量表达式 
constexpr size_t
scale(size_t cnt)
{
    return new_sz() * cnt;
}

//函数匹配
//（1）选定本次调用对应的重载函数集，候选函数；函数名相同，声明在调用点可见；
//（2）根据实参，选出可行函数（viable function）；形参数量与本次调用提供的实参数量相等，每个实参的类型与对应的形参相同，或者能够转为形参的类型类型。
//void f();
//void f(int);
//void f(int, int);
//void f(double ,double = 3.14);
//f(5.6); 调用函数f
//f(int)可行，实参double类型可以转换为int
//f(double, double=3.14);可行，第二个形参提供了默认值。
//（3）寻找最佳匹配，从可行函数中选择与本次调用最匹配的函数。
// 实参类型和形参类型越接近，他们匹配得越好
// 选择了f(double ,double=3.14);

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

//含有多个形参的匹配
//编译器依次检查每个实参以确定哪个函数是最佳匹配
//（1）该函数每个实参的匹配都不劣于其他可行函数需要的匹配
//（2）至少有一个实参的匹配由于其他可行函数的匹配
//否则有二义性


//函数指针 
//bool lengthcompare(const string &, const string &);
//bool (*pf)(const string&, const string &);
//pf = lengthcompare;
//pf = &lengthcompare;  //取址符可选
//调用等价
//bool b1 = pf("hello", "goodbye");
//bool b1 = (*pf)("hello", "goodbye");
//bool b1 = lengthcompare("hello", "goodbye");

//函数指针形参
//形参可以是指向函数的指针 
//void 
//userbigger(const string &s1, const string &s2,
//      bool pf(const string& , const string &));

//userbigger(const string &s1, const string &s2,
//      bool (*pf)(const string& , const string &));
//直接当作实参使用 
//userbigger(s1, s2, lengthcompare);
//
//typedef bool(*FuncP)(const string &s1, const string &s2);
//typedef decltype(lengthcompare) *FuncP2;

int
main(int argc, char *argv[])
{
    int a = 5;
    int b;

    //没有规定实参的求值顺序
    b = fact(a);

    cout << "the fact is:" << b << endl;

    //void f1(){/*   */} //隐式定义空形参列表
    //void f2(void) {/*   */} //通过void显式定义空形参列表
    //
    
    string s1("hello");
    string s2("world!");
    //引用初始化
    string s3 = shorterString(s1, s2);

    cout << "the short is:" << s3 << endl;
    
    //引用返回左值
    string s11("a value");

    cout << "the origin value is:"<< s11 << endl;

    //get_val返回值是引用
    get_val(s11, 0) = 'A';

    cout << "the modified value is:" << s11 << endl;
    
    //内联函数直接展开 
    cout << shorterString1(s1, s2) << endl;

    int arrayscale[scale(2)];
    int i = 2;
    //不是常量表达式，错误
    //TODO fix
    //应该和编译器有关
    int a2[scale(i)];
    a2[0] = 1;
    a2[1] = 1;
    cout << a2[0] << "-" << a2[1] << endl;

    double param = 5.6;
    //选了double匹配
    f(5.6);

    //二义性，编译器报错
    //f(42, 2.56);
    //二义性，编译器报错
    //f(2.56, 42);

    return 0;

}
