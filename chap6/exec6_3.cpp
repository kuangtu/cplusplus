#include <iostream>
using std::cout;
using std::endl;


int fact(int n)
{
	int ret = 1;
	while(n > 1)
	{
		ret *= n;
		--n;
	}

	return ret;
}

int
main(int argc, char *argv[]) 
{
	int n = 3;

	cout << fact(n)  << endl;

	return 0;

}
