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
using std::make_pair;
using std::multimap;
using std::multiset;

int
main(int argc, char *argv[])
{
    //insert接收一对迭代器或者一个初始化列表
    vector<int> ivec = {2, 4, 6, 8, 2, 4, 6, 8};
    set<int> set2;

    set2.insert(ivec.cbegin(), ivec.cend());

    set2.insert({1, 3, 5, 7});

    auto iter = set2.begin();

    while(iter != set2.end())
    {
        cout << *iter << endl;
        ++iter;
    }

    map<string, int> word_count;

    //map insert 4种方法
    word_count.insert({"hello", 1});

    word_count.insert(make_pair("world", 2));

    word_count.insert(pair<string, size_t>("test", 3));

    word_count.insert(map<string, size_t>::value_type("cc", 4));

    //insert返回值的检查
    auto res = word_count.insert({"win", 0});
    if (!res.second)
    {
        res.first->second = 10;
    }


    //向multiset和multimap添加元素
    multimap<string, string> authors;

    //插入同一个关键字的多个元素
    //只返回指向新增元素的迭代器
    auto insret = authors.insert({"mo", "fast"});

    cout << "the key is:" << insret->first << endl;

    authors.insert({"mo", "fix"});

    return 0;
}
