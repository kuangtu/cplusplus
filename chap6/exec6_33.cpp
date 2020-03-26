#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::begin;
using std::end;


void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print(++beg, end);
	}

}


int
main(int argc, char *argv[]) 
{
	vector<int> ivec = {1, 2, 3, 4, 5};


	print(ivec.begin(), ivec.end());

	return 0;

}
