
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;


int&
get(int *array, int index)
{
    return array[index];
}

int
main(int argc, char *argv[])
{
    int ia[10];
    for (int i = 0; i != 10; i++)
    {
        //返回的是引用，通过index赋值
        get(ia, i) = i;
    }

    for (int i = 0; i != 10; i++)
    {
        cout << ia[i] << endl;
    }

    return 0;
}
