#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int
main(int argc, char *argv[]) 
{

	for (int i = 1; i != argc; i++)
	{
		cout << argv[i] << " " ;
	}

	cout << endl;
	return 0;

}
