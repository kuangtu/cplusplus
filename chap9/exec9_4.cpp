#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;


bool
finditem(vector<int>::iterator start, vector<int>::iterator end, int i)
{
	while(start != end)
	{
		if (*start == i)
		{
			return true;
		}

		++start;
	}

	return false;
}

int
main(int argc, char *argv[]) 
{

	vector<int> ivec(10);
	int i = 0;

	vector<int>::iterator begin = ivec.begin();
	vector<int>::iterator end = ivec.end();
	while(begin != end)
	{
		*begin = i++;
		++begin;
	}

	bool res;
	
	res = finditem(ivec.begin(), ivec.end(), 8);

	cout << "find res is:" << res << endl;


	return 0;
}

