#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <array>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::array;

int
main(int argc, char *argv[]) 
{

	array<int, 10> a1;

	array<int, 10>::iterator begin = a1.begin();
	array<int, 10>::iterator end = a1.end();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	return 0;
}
