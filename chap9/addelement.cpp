#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <array>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::array;
using std::list;


int
main(int argc, char *argv[])
{
    vector<string> vstr;
    string word;

    //增加到尾部
    while(cin >> word)
    {
        vstr.push_back(word);
    }

    vector<string>::iterator begin = vstr.begin();
    vector<string>::iterator end = vstr.end();

/*
    //基于迭代器，增加多个元素
    vstr.insert(begin, 2, "hello");

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    vector<string>::const_iterator begin1 = vstr.begin();
    vector<string>::const_iterator end1 = vstr.end();

    while(begin1 != end1)
    {
        cout << *begin1 << endl;
        ++begin1;
    }

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

*/

/*
    //插入到容器的头部
    list<int> lint;
    int num;

    while(cin >> num)
    {
        lint.push_front(num);
    }

    list<int>::iterator lbegin = lint.begin();
    list<int>::iterator lend = lint.end();

    while(lbegin != lend)
    {
        cout << *lbegin <<endl;
        ++lbegin;
    }
*/


    return 0;
}
