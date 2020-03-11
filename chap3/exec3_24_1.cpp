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
	int i;
	vector<int> ivec;

	while(cin >> i)
	{
		ivec.push_back(i);
	}

	if (ivec.empty())
	{
		cout << "vector is empty" << endl;

		return -1;
	}
	
	if (ivec.size() == 1)
	{
		cout << "one elements." << endl;

		return -1;
	}

	for (auto it = ivec.begin(); it != ivec.end() - 1; it++)
	{
		int sum = *it + *(it + 1);
		cout << sum << " " ;
	}
	cout << endl;



	return 0;

}
