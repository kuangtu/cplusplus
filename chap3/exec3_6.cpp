#include <iostream>
#include <cctype>

using std::endl;
using std::cin;
using std::cout;
using std::string;


int
main(int argc, char *argv[]) 
{

	string s("hello world");

	for (auto &c: s)
	{
		c = toupper(c);
	}

	cout << s << endl;

	return 0;

}
