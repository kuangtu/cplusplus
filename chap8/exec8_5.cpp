#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::ifstream;


int
main(int argc, char *argv[])
{
    vector<string> v;
    std::string inputfile = "bookinfo.txt";
    ifstream input(inputfile, ifstream::in);
    string str;

    while(input >> str)
    {
        //cout << str;
        v.push_back(str);
    }

    //遍历vector
    for (auto &i : v)
    {
        cout << i <<endl;
    }

    return 0;
}
