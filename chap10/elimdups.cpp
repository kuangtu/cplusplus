#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::accumulate;
using std::unique;
using std::sort;
using std::string;

void
elimDups(vector<string> &word)
{
    //按照字典排序
    sort(word.begin(), word.end());

    //去重复
    auto end_unique = unique(word.begin(), word.end());

    //基于容器操作进行删除
    word.erase(end_unique, word.end());

}

int
main(int argc, char *argv[])
{
    vector<string> word {"test", "hello", "world", "test", "cc", "cc"};

    elimDups(word);

    auto begin = word.begin();
    auto end = word.end();

    while(begin != end)
    {
        cout << *begin << endl;
        ++begin;
    }


    return 0;
}
