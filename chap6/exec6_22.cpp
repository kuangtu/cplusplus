#include <iostream>

using std::cout;
using std::endl;

void
exchgpointer(int &a, int &b)
{
    int c;

    c = a;
    a = b;
    b = c;
}

void
exchg(int* &a, int* &b)
{
    int *c;

    c = a;
    a = b;
    b = c;
}

int
main(int argc, char *argv[])
{

    int a = 10, b = 20;
    cout << "before exchange a is:" << a << "--b is:" << b << endl;

    exchgpointer(a, b);

    cout << "after exchange a is:" << a << "--b is:" << b << endl;
    
    int *c = &a;
    int *d = &b;

    cout << "before exchange c is:" << *c << "--d is:" << *d << endl;
    exchg(c, d);
    cout << "after exchange c is:" << *c << "--d is:" << *d << endl;

    return 0;

}
