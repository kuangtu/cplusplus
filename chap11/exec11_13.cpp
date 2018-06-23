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
	string s  = "hello";
	int i = 10;

	//创建pair方法1
	pair<string, int> p(s, i);

	cout << p.first << " " << p.second << endl;

	//创建pair方法2
	pair<string, int> p1 = {s, i};

	cout << p1.first << " " << p1.second << endl;

	//创建pair方法3
	pair<string, int> p3;

	p3 = make_pair(s, i);
	
	cout << p3.first << " " << p3.second << endl;

	return 0;
}
