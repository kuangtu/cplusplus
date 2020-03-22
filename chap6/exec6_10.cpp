#include <iostream>
#include <cstdlib>

using std::cin;
using std::cout;
using std::endl;


void exchg(int *a, int *b)
{
	int c = 0;

	c =  *a;
	*a = *b;
	*b = c;
}
int
main(int argc, char *argv[]) 
{

	int a = 1, b = 2;

	cout << a << " " << b << endl;
	exchg(&a, &b);
	cout << a << " " << b << endl;

	return 0;

}
