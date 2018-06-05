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
    char str[256];

    memset(str, 0, 256);
    //打开检查
    if (input)
    {
        while(input.getline(str, 256))
        {
            std::string s(str);
            cout << s << endl;
            v.push_back(s);
        }

    }

    return 0;
}
