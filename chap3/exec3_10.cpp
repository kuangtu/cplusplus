#include <iostream>
#include <cctype>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int
main(int argc, char *argv[]) 
{

	string s;
	getline(cin, s);
	for (auto c : s)
	{
		if (!ispunct(c))
		{
			cout << c;
		}
	}
	cout << endl;

	return 0;

}
