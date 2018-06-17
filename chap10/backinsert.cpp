#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::back_inserter;

int
main(int argc, char *argv[])
{

	vector<int> vec;

	//插入迭代器
	auto it = back_inserter(vec);

	*it = 42;

	auto begin = vec.cbegin();
	auto end = vec.cend();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	vector<int> vec_fill;
	//基于back_inserter，fill_n进行操作
	//每次遍历的时候，通过back_inserter插入到
	fill_n(back_inserter(vec_fill), 10, 2);

	begin = vec_fill.cbegin();
	end = vec_fill.cend();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	return 0;
}
