#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>

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


int
main(int argc, char *argv[])
{
    vector<string> dist_names;
    string s;

    while(cin >> s)
    {
        string back;
        if(dist_names.size() > 0)
        {
            back = dist_names.back();

            if (back != s)
            {
                dist_names.push_back(s);
            }
        }
        else
        {
            dist_names.push_back(s);
        }
    }

    for (const auto &name : dist_names)
    {
        cout << name << " " << endl;
    }

    return 0;
}
