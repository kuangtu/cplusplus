#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;

int
main(int argc, char *argv[]) 
{

	constexpr size_t len = 10;

	int a[len];

	int *p = a;

	for (size_t i = 0; i < len; i++)
	{
		*p = 0;
		p++;
	}


	for (size_t i = 0; i < len; i++)
	{
		cout << a[i] << " ";
	}

	cout << endl;

	return 0;

}
