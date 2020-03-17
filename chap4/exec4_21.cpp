#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;


int
main(int argc, char *argv[]) 
{

	vector<int> ivec{1, 2, 3, 4, 5};
	
	for(auto &i : ivec)
	{
		i =  (i % 2 == 0) ? (i * 2) : i;
	}

	for (auto i : ivec)
	{
		cout << i << " ";
	}
	
	cout << endl;

	return 0;

}
