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
    vector<int> ivec;

    for (int i = 0; i != 10; i++)
    {
        ivec.push_back(i);
        ivec.push_back(i);
    }

    set<int> iset(ivec.cbegin(), ivec.cend());

    //可以重复
    multiset<int> miset(ivec.cbegin(), ivec.cend());

    cout << "the vector size is: " << ivec.size() << endl;
    cout << "the set size is: " << iset.size() << endl;
    cout << "the multi set size is: " << miset.size() << endl;

    return 0;
}
