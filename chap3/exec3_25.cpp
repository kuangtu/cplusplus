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

	vector<unsigned> scores(11, 0);

	unsigned grade;

	while(cin >> grade)
	{
		if (grade <= 100)
		{
			++(*(scores.begin() + grade /10));
		}
	}

	for (auto begin = scores.begin(); begin != scores.end(); begin++)
	{
		cout << *begin << " ";
	}

	cout << endl;

	return 0;

}
