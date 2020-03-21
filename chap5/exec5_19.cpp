#include <iostream>
#include <string>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int
main(int argc, char *argv[]) 
{

	string s1;
	string s2;
	string resp;

	do
	{
		
		cout << "please input str1 " << endl;
		cin >> s1;
		
		cout << "Please input str2 " << endl;
		cin >> s2;

		cout << (s1.size() < s2.size() ? s1 : s2) << endl;

		cout << "More?" << endl;
		cin >> resp;

	} while(!resp.empty() && resp[0] != 'n');

	return 0;

}



