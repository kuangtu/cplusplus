#include <iostream>
#include <string>
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
	string s1("hellow");
	string s2("cwcw");

	if (s1 == s2)
	{
		cout << " two string equal" << endl;
	}

	else if (s1 > s2)
	{
		cout << "s1 bigger " << endl;
	}
	else
	{
		cout << "s2 bigger " << endl;
	}

	return 0;

}
