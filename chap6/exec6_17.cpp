#include <iostream>
#include <cstdbool>
#include <string>
#include <cctype>

using std::cout;
using std::cin;
using std::endl;
using std::string;

bool
isCap(const string &s)
{
	bool res = false;
	string::size_type ctr = 0;

	for (decltype(ctr) i = 0; i != s.size(); i++)
	{
		if (!isupper(s[i]))
		{
			res = true;
			break;
		}
	}

	return res;

}

void
StrCap(string &s)
{

	for (auto &c:s)
	{
		if (isupper(c))
		{
			c = tolower(c);
		}
	}

}


int
main(int argc, char *argv[]) 
{

	const string s = "hello world";

	bool res = isCap(s);

	cout << "is contain cap character:" << res << endl;

	return 0;
}
