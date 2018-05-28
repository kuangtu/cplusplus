#include <iostream>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;


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

    return 0;

}
