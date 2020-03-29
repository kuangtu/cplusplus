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

int
main(int argc, char *argv[]) 
{

	using PF = int(*)(int, int);

	vector<PF> funv{addint, subint, mulint, divint};

	for(auto f : funv)
	{
		cout << f(1, 1) << endl;
	}
	return 0;

}
