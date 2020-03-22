#include <iostream>
#include <cstdlib>
#include "chapter6.h"

using std::cin;
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
