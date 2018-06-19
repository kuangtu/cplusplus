#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::fill_n;

int
main(int argc, char *argv[]) 
{

	vector<int> vec(10,1);

	fill_n(vec.begin(), vec.size(), 0);

	auto begin = vec.cbegin();
	auto end = vec.cend();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	return 0;
}
