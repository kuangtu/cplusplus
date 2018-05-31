#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;

int addint(int a, int b)
{
    return a + b;
}

int subint(int a, int b)
{
    return a - b;
}

int mulint(int a, int b)
{
    return a * b;
}

int divint(int a, int b)
{
    //TODO 
    return a / b;
}

typedef decltype(addint) *pFunc1;

int
main(int argc, char *argv[])
{

    //vector<pFunc1> vfunc{addint, subint, mulint, divint};
    //定义了vector，没有初始化，通过push_back追加
    vector<pFunc1> vfunc;
    vfunc.push_back(addint);
    vfunc.push_back(subint);
    vfunc.push_back(mulint);
    vfunc.push_back(divint);

    for (size_t i = 0; i != vfunc.size(); i++)
    {
        
        //vector中的每个元素类型是函数指针，pFunc1
        pFunc1 p = vfunc[i];
        int res = p(1,1);
        cout << res <<endl;
        printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
        cout << vfunc[i](1,1) << endl;
        
    }
    return 0;
}
