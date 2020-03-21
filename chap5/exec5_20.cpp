#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int
main(int argc, char *argv[]) 
{

	string s;
	string tmp;
	int flag = 0;

	while(cin >> s)
	{
		if (s == tmp)
		{
			cout << "found same words" << endl;
			flag = 1;
			break;
		}
		else
		{
			tmp = s;
		}
	}

	if (!flag)
	{
		cout << "no same words" << endl;
	}

	return 0;

}



