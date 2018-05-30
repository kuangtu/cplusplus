#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::string;

//使用decltype
int odd[5] =  {1, 3, 5, 7, 9};
int even[5] = {0, 2, 4, 6, 8};


//返回指向数组的指针
decltype(odd) *arrayPtr(int i)
{
    return (i % 2) ? &odd : &even;
}

//返回指向数组的引用
decltype(odd) &arrayPtr1(int i)
{

    return (i % 2) ? odd : even;
}

int
main(int argc, char *argv[])
{
    int (*arrPtr)[5] = arrayPtr(1);

    for (auto i = 0; i != 5; i++)
    {
        //arrPtr指向数组的指针，
        //指向数组的首地址，
        cout << (*arrPtr)[i] << endl;
    }

    int (&arrPtr1)[5] =  arrayPtr1(1);

    for (auto j = 0; j != 5; j++)
    {
        //arrPtr1是数组的引用
        cout << arrPtr1[j] << endl;
    }
    return 0;
}
