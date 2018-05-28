#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void
reset(int &i)
{
	i = 0;
}

int
main(int argc, char *argv[]) 
{
	int num = 10;

	reset(num);

	cout << "the reset num is:" << num << endl;

	return 0;
}
