#include <iostream>
#include <cctype>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int
main(int argc, char *argv[]) 
{

	//string s("hello world");
	//
	//for (decltype(s.size()) index = 0; index < s.size(); index++)
	//{
	//	s[index] = toupper(s[index]);
	//}

	//cout << s << endl;

	string s("hello world");

	decltype(s.size()) index = 0;
	while(index < s.size())
	{
		s[index] = toupper(s[index]);
		index++;
	}

	cout << s << endl;
	return 0;

}
