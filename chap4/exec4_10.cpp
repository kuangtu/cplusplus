#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int
main(int argc, char *argv[]) 
{
	int i;

	while( cin >> i)
	{

		if (i == 42)
		{
			break;
		}
	}

	return 0;
}
