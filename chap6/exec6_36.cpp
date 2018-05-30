#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::string;

string arrstr[5] ={"111", "222", "333", "444", "555"};

string (*strfun(int i))[5]
{
    return &arrstr;
}

string (&func3(int i))[5]
{
    return arrstr;
}

//通过decltype进行定义
decltype(arrstr) &func2(int i)
{
    return arrstr;
}

//尾置返回类型
auto func1(int i)->string(&)[5]
{
    return arrstr;
}

int
main(int argc, char *argv[])
{

    string (*arrPtr)[5] = strfun(1);

    cout << arrstr[0] << endl;
    

    for (auto i = 0; i != 5; i++)
    {
        cout << (*arrPtr)[i] << endl;
    }

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    string (&arrPtr1)[5] = func1(1);

    for (auto j = 0; j != 5; j++)
    {
        cout << arrPtr1[j] << endl;
    }
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    string (&arrPtr2)[5] = func2(1);

    for (auto k = 0; k != 5; k++)
    {
        cout << arrPtr2[k] << endl;
    }

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    string (&arrPtr3)[5] = func3(1);

    for (auto l = 0; l != 5; l++)
    {
        cout << arrPtr3[l] << endl;
    }

    return 0;
}
