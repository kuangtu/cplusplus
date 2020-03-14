#include <iostream>
#include <string>
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

	vector<int> v1{1, 2, 3};
	vector<int> v2{1, 2, 3};
	
	if (v1.size() != v2.size())
	{

		cout << "the two vector is not same" << endl;
	}

	for(vector<int>::size_type i = 0; i < v1.size(); i++)
	{
		if (v1[i] != v2[i])
		{

			cout << "the two vector is not same" << endl;

			return 0;
		}
	}

	cout << "the two vector is same" << endl;

	return 0;

}
