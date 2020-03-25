#include <iostream>
#include <string>
#include <cstdbool>

using std::cin;
using std::cout;
using std::endl;
using std::string;


bool 
is_empty(string &s) { return s.empty();}

int
main(int argc, char *argv[]) 
{

	string s("test");
	cout << is_empty(s) << endl;

	//cout << is_empty("hello world") << endl;

	return 0;

}

