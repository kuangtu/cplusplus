#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::string;
using std::vector;


int func1(int , int);

typedef decltype(func1) *pFunc1;

typedef int(*func2)(int a, int b);

vector<pFunc1> vfunc(5);

int
main(int argc, char *argv[])
{
    //vfunc.push_back(func1);

    return 0;
}
