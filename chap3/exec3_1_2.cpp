#include <iostream>
using std::cout;
using std::endl;

int
main(int argc, char *argv[]) 
{
	int val = 10;

	while(val >= 0)
	{
		cout << val << " ";
		--val;
	}

	cout << endl;
}
