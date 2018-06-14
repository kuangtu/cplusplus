#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <stack>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::stack;


int
main(int argc, char *argv[]) 
{
	vector<int> ivec;

	cout << "ivec size: " << ivec.size()
		<< "capacity: " << ivec.capacity() << endl;

	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);
	for (vector<int>::size_type idx = 0; idx != 10; idx++)
	{
		ivec.push_back(10);
	}

	cout << "ivec size: " << ivec.size()
		<< "capacity: " << ivec.capacity() << endl;


	return 0;
}
