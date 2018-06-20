#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;


int
main(int argc, char *argv[])
{
    string line = "the is a test";
    string word;

    istringstream ss(line);
    ss >> word;
    cout << word << endl;

    ss >> word;
    cout << word << endl;

    ss >> word;
    cout << word << endl;

    ss >> word;
    cout << word << endl;

    return 0;
}
