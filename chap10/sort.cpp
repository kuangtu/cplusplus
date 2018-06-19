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
using std::stable_sort;

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

bool
isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

int
main(int argc, char *argv[])
{
    vector<string> word {"test", "hello", "world", "test", "cc", "cb"};

    elimDups(word);

    for (const auto &s : word)
    {
        cout << s << " ";
    }
    cout << endl;

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    stable_sort(word.begin(), word.end(), isShorter);

    for (const auto &s : word)
    {
        cout << s << " ";
    }

    cout << endl;

    //sort(word.begin(), word.end(), isShorter);

    //auto begin = word.begin();
    //auto end = word.end();

    //while(begin != end)
    //{
    //    cout << *begin << endl;
    //    ++begin;
    //}

    return 0;
}
