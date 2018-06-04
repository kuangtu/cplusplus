#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;

istream&
inputstream(istream& is)
{
	std::string word;
	while(is >> word)
	{
		cout << word << endl;
	}

	return is;
}

int
main(int argc, char *argv[]) 
{

	inputstream(std::cin);

	return 0;
}
