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

	//输出相邻元素的和
	for (decltype(ivec.size()) j = 0; j != ivec.size() - 1; j++)
	{
		int sum = ivec[j] + ivec[j + 1];
		cout << sum << endl;
	}


	//计算首尾
	decltype(ivec.size()) j = ivec.size();

	if (j % 2)
	{
		j = j / 2 + 1;
	}
	else
	{
		j = j / 2;
	}

	for (decltype(ivec.size()) i = 0; i != j; i++)
	{
		int sum = ivec[i] + ivec[ivec.size() - i - 1];
		cout << sum << endl;
	}

	return 0;

}
