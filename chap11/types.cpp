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
    //关联容器操作，额外的别名
    //key_type 关键字类型 
    //mapped_type， 关键字关联的类型，只适用于map
    //value_type，对于map，为pair<const key_type, mapped_type
    
    set<string>::key_type v1; //v1类型为string
    set<string>::value_type v2; //v2类型为string

    map<string, int>::value_type v3; //v3是pair<const string, int>
    map<string, int>::key_type v4; //v4类型为string
    map<string, int>::mapped_type v5;  //v5类型为int

    map<string, int> word_count;

    word_count["hello"] = 20;

    //解析用迭代器时，会得到一个类型为容器的value_type的值的引用
    auto mapped = word_count.begin();

    //*mapped是指向一个pair<const string, size_t>对象的引用
    
    cout << mapped->first << " " << mapped->second;

    cout << endl;
    //key是const修饰的，不能够修改
    //mapped->first = "world";

    ++mapped->second;

    //set迭代器是const的
    set<int> iset = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    set<int>::iterator set_it = iset.begin();

    while(set_it != iset.end())
    {
        cout << *set_it << endl;
        set_it++;

        //不能修改
        //*set_it = 10;
    }

    return 0;
}
