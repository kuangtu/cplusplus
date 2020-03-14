
#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <cstddef>



using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::begin;
using std::end;
int
main(int argc, char *argv[]) 
{   

	vector<int> ivec(5, 1);
	int int_arr[5];
	

	for (auto p = begin(int_arr); p != end(int_arr); p++)
	{
		*p = ivec[p - begin(int_arr)];
	}

	return 0;

}
