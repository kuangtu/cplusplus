#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;

int
main(int argc, char *argv[]) 
{
	string s;
	vector<string> svec;

	while(cin >> s)
	{
		svec.push_back(s);
	}

	return 0;
}
