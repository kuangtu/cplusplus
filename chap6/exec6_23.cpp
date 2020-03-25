#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::begin;
using std::end;


void print1(int *p, size_t size)
{
	for (size_t i = 0; i != size; i++)
	{
		cout << p[i] << endl;
	}
}

void print2(const int *beg, const int *end)
{
	while(beg != end)
	{
		cout << *beg++ << endl;
	}
}

void print3(int (&p)[2])
{
	for (auto elmem : p)
	{
		cout << elmem << endl;
	}
}

int
main(int argc, char *argv[]) 
{

	int j[] = {0, 1};
	int (&p)[2] = j;
	print1(j, sizeof(j) /sizeof(int));
	print2(begin(j), end(j));
	print3(p);
	return 0;

}
