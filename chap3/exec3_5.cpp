#include <iostream>
#include <string>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int
main(int argc, char *argv[]) 
{

	string s1, tmp;

	while(cin >> tmp)
	{
		s1 += tmp;
	}

	cout << s1 << endl;

	
	string s2 , tmp2;
	while(cin >> tmp2)
	{
		if (s2.empty())
		{
			s2 += tmp;
		}
		else
		{
			s2 += " " + tmp;
		}

	}

	cout << s2 << endl;

	return 0;
}
