#include <iostream>

using std::cin;
using std::cout;
using std::endl;

void
exchg(int &a, int &b)
{
	int c;
	c = a;
	a = b;
	b = c;
}

int
main(int argc, char *argv[]) 
{
	int a = 10;
	int b = 15;

	cout << "before exchange a:"<< a << "and b:" << b << endl;
	exchg(a , b);
	cout << "after exchange a:"<< a << "and b:" << b << endl;

	return 0;
}
