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

	
	for(auto begin = ivec.begin(),  end = ivec.end() - 1; begin <= end; begin++ , end--)
	{
		int sum = *begin  + *end;
		cout << sum << " ";
	}

	cout << endl;



	return 0;

}
