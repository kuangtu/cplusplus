#include <iostream>
#include <string>
#include <vector>
#include <cstddef>
#include <cstring>

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
	const char ca1[] = "hello";
	const char ca2[] = "world";

	int rs = strcmp(ca1, ca2);

	if (rs == 0)
	{
		cout << "the two string equal" << endl;
	}
	else if (rs > 0)
	{
		cout << "ca1 bigger" << endl;
	}
	else
	{
		cout << "ca2 bigger" << endl;
	}

	return 0;

}
