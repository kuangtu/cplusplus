#include <iostream>
#include <cctype>

using std::endl;
using std::cin;
using std::cout;
using std::string;


int
main(int argc, char *argv[]) 
{
	string s1;
	string s2;

	cin >> s1;
	cin >> s2;

	if (s1 >= s2)
	{
		cout << s1 << endl;
	}
	else
	{
		cout << s2 << endl;
	}

	cin >> s1;
	cin >> s2;
	if (s1.size() >= s2.size())
	{
		cout << s1 << endl;
	}
	else
	{
		cout << s2 << endl;
	}

	return 0;
}
