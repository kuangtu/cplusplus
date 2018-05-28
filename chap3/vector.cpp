#include <iostream>
#include <vector>

using std::vector;
using std::endl;
using std::cout;
using std::cin;



int
main(int argc, char* argv[])
{
	vector<int> ivec(5);
	ivec ={1, 2, 3, 4, 5};

	for (auto i : ivec)
		cout << i << endl;

	//initial vector
	vector<unsigned int> scores(11, 0);
	unsigned int grade;
	while(cin >> grade)
	{
		if (grade <= 100)
		{
			++scores[grade/10];
		}
	}
	for ( vector<unsigned int>::size_type c = 0; c < scores.size(); c++)
	{
		cout << scores[c] << endl;
	}
	return 0;

}
