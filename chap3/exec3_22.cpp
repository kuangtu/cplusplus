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

	string s;
	vector<string> svec;

	while(cin >> s)
	{
		svec.push_back(s);
	}

	cout << "Vector size " << svec.size() << endl;

	for (auto it = svec.begin(); it != svec.end(); ++it)
	{
		for (auto &c : *it)
		{
			c = toupper(c);
		}

		cout << * it << " ";
	}
	cout << endl;

	return 0;
}
