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
    map<string, int> word_count;

    word_count["hello"] = 20;

    //解析用迭代器时，会得到一个类型为容器的value_type的值的引用

    map<string, int>::const_iterator mapped = word_count.cbegin();

    //*mapped是指向一个pair<const string, size_t>对象的引用
    
    cout << mapped->first << " " << mapped->second;

    cout << endl;

    return 0;
}
