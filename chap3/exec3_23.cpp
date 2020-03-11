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

	vector<int> ivec(10, 2);

	cout << "Vector size " << ivec.size() << endl;

	for (auto it = ivec.begin(); it != ivec.end(); ++it)
	{
		*it = *it * 2;
		cout << *it << " ";
	}
	cout << endl;

	return 0;
}
