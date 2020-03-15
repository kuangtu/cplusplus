#include <iostream>

using std::cout;
using std::endl;

int
main(int argc, char *argv[]) 
{


	int a = 0;
	a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << a << endl;

	//取模运算优先级低于乘法和除法
	a = (12 / 3) * 4  + (5 * 15) + (24 % (4 / 2));
	cout << a << endl;

	return 0;
}
