#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::string;

int
ff(int a, int b = 0, int c = 0)
{
    cout << a << "-" << b << "-" << c << endl;
    return 0;
}

//默认实参负责填补函数调用缺少的尾部实参
//char *
//init(int ht = 24, int wd, char backgrd)
//{
//    return NULL;
//}

char *
init(int ht = 24, int wd = 10, char backgrd = 'c')
{
    cout << ht << "-" << wd << "-" << backgrd << endl;
    return NULL;
}

int
main(int argc, char *argv[])
{

    ff(3);  //ff(3, 0, 0)

    ff(3, 1); //ff(3, 1, 0)

    ff (3,1,2); 

    init(); //init(24, 10, 'c');
    init(24); //init(24, 10, 'c');
    init(24, 20); //init(24, 20, 'c');
    init(24, 30, 'd'); 
    return 0;
}

