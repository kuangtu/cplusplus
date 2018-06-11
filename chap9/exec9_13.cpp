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
	vector<int> v1 = {1, 2, 3, 4};
	vector<int> v2;
	
	v2 = v1;

	vector<int>::iterator begin = v1.begin();
	vector<int>::iterator end = v1.end();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	return 0;
}
