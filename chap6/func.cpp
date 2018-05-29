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

    return 0;

}
