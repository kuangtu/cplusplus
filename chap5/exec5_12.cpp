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

	unsigned int ffCnt = 0, flCnt = 0, fiCnt = 0;
	string s;

	while(cin >> s)
	{
		char s1 = s[0];
		char s2 = s[1];

		switch(s1)
		{
			case 'f':
				switch(s2)
				{
					case 'f': ffCnt++;break;
					case 'l': flCnt++;break;
					case 'i': fiCnt++;break;
					default: break;

				}
			default: break;
							
						

		}
	}

	cout << "Number of ff is " << ffCnt << endl;
	cout << "Number of fl is " << flCnt << endl;
	cout << "Number of fi is " << fiCnt << endl;


	return 0;

}



