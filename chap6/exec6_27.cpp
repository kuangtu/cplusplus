#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;

int
sumlist(initializer_list<int> intlist)
{
	int sum = 0;
	for (auto beg = intlist.begin(); beg != intlist.end(); ++beg)
	{
		sum += *beg;
	}

	return sum;
}

int
main(int argc, char *argv[]) 
{

	cout << sumlist({1,2,3,4}) << endl;
	return 0;
}
