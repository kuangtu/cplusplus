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

	vector<int> ivec;
	int value;

	while(cin >> value)
	{
		ivec.push_back(value);
	}
}
