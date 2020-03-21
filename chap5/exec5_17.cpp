#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int
main(int argc, char *argv[]) 
{
	vector<int> v1 = {0, 1, 1, 2};
	vector<int> v2 = {0, 1, 1, 2, 3, 5, 8};

	vector<int>::size_type l1 = v1.size();
	vector<int>::size_type l2 = v2.size();

	cout << l1 << endl;
	cout << l2 << endl;

	auto size = v1.size() < v2.size() ? v1.size() : v2.size();

	for (vector<int>::size_type i = 0; i < size; i++)
	{
		if (v1[i] != v2[i])
		{
			cout << "false" << endl;
			break;

			return 0;
		}
	}


	cout << "true" << endl;

	return 0;

}



