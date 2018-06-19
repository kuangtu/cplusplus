#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include <iterator>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::fill_n;
using std::list;
using std::copy;

int
main(int argc, char *argv[]) 
{
	vector<int> vec;
	list<int> lst;
	int i;

	/* 
	while(cin >> i)
	{
		lst.push_back(i);
	}

	//需要大小不同,vec为空
	copy(lst.cbegin(), lst.cend(), vec.begin()); 

	auto begin = vec.cbegin();
	auto end = vec.cend();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}
	*/

	while(cin >> i)
	{
		lst.push_back(i);
	}
	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);

	//根据list数目
	vec.assign(lst.size(), 0);

	copy(lst.cbegin(), lst.cend(), vec.begin());

	auto begin = vec.cbegin();
	auto end = vec.cend();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	return 0;
}
