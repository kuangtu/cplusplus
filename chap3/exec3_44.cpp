#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstddef>


using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::begin;
using std::end;

int
main(int argc, char *argv[]) 
{

	using int_array = int[4];
	int ia[3][4] = {0};

	for (int_array *p = ia; p != ia + 3; p++)
	{
		for (int *q = *p; q != *p + 4; ++q)
		{
			cout << *q << " ";
		}
		cout << endl;
	}

	return 0;

}
