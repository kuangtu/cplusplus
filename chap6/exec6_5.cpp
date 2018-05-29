#include <iostream>
#include <cstdlib>
using std::cin;
using std::cout;
using std::endl;


int
getabs(int num)
{
	return abs(num);
}

int
main(int argc, char *argv[]) 
{
	int a;

	cout << "please input a  number." << endl;
	cin >> a;
	cout << getabs(a) << endl;

	return 0;
}
