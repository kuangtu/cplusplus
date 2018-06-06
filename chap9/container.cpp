#include <iostream>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;


int
main(int argc, char *argv[]) 
{
	vector<string> strvec;
	string s1 = "hello";
	string s2 = "world";
	string s3 = "finished.";
	strvec.push_back(s1);
	strvec.push_back(s2);
	strvec.push_back(s3);
	vector<string>::iterator begin = strvec.begin();
	vector<string>::iterator end = strvec.end();

	while(begin != end)
	{
		cout<< *begin << endl;
		begin++;
	}

	return 0;
}
