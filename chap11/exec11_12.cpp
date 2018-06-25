#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>
#include <utility>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::string;
using std::ifstream;
using std::istringstream;
using std::multiset;
using std::vector;
using std::pair;

int
main(int argc, char *argv[]) 
{
	string s("hello");
	int i = 10;

	pair<string, int> p;

	p = {s, i};

	cout << p.first << endl;

	cout << p.second << endl;
	

	return 0;
}
