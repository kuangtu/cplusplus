#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::string;

int
main(int argc, char *argv[]) 
{
	const vector<string> scores = {"F", "D", "C" , "B", "A", "A++"};
	int grade = 100;

	string lettergrade;
	if (grade < 60)
		lettergrade = scores[0];
	else
		lettergrade = scores[(grade - 50) / 10];

	cout << lettergrade << endl;

	return 0;

}
