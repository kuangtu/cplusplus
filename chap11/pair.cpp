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
    pair<string, string> p;

    pair<string, string> p1("hello", "world");
    pair<string, string> p2 = {"hello", "world"};

    cout<< (p1 == p2) << endl;

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    cout << p1.first << " " << p1.second << endl;
    return 0;
}
