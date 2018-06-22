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

void
addfamily(map< string, vector<string> > &family, string family_name)
{
    vector<string> children;

    family[family_name] = children;
}

//直接基于vector进行
//void
//addchild(map< string, vector<string> > &family, string family_name, string given_name)
//{
//    family[family_name].push_back(given_name);
//}

void
addchild(map< string, vector<string> > &family, string family_name, string given_name)
{
    //采用引用
    vector<string> &names = family[family_name];
    names.push_back(given_name);
}

int
main(int argc, char *argv[])
{
    map< string, vector<string> > family;

    string family_name = "mo";

    addfamily(family, family_name);

    for (const auto &pair : family) 
    {
        cout << pair.first << ":" << endl;

        for (const auto &value : pair.second)
        {
            cout << "   " << value << endl;
        }
    }

    family_name = "yu";
    string given_name = "donglan";
    
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    addchild(family, family_name, given_name);

    for (const auto &pair : family) 
    {
        cout << pair.first << ":" << endl;

        for (const auto &value : pair.second)
        {
            cout << "   " << value << endl;
        }
    }

    return 0;
}
