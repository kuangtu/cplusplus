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
	int count = 0;
	int MaxCnt = 0;
	string MaxStr;
	
	if (cin >> s)
	{

		++MaxCnt;
		++count;
		MaxStr = s;

		while(cin >> tmp)
		{
			if (s == tmp)
			{
				++count;

				if (MaxCnt <= count)
				{
					MaxCnt = count;
					MaxStr = s;
				}
			}
			else
			{
				s = tmp;
				count = 1;
			}
		}

		cout << "th MaxCnt is: " << MaxCnt;
		cout << "the MaxStr is: " << MaxStr;
	}
	else
	{
		cout << "Input err" << endl;
	}

	



	return 0;

}



