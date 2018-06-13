#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <list>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::list;
using std::deque;

int
main(int argc, char *argv[])
{
    deque<int> d1;
    deque<int> d2;
    list<int> lst;

    //初始化lst
    for (int i = 0; i < 10; i++)
    {
        lst.push_front(i);
    }

    //拷贝元素
    auto begin = lst.begin();
    auto end = lst.end();

    while(begin != end)
    {
        if (*begin % 2 == 0)
        {
            d1.push_back(*begin);
        }
        else
        {
            d2.push_back(*begin);
        }

        ++begin;
    }

    //输出d1
    auto be_d1 = d1.begin();
    auto end_d1 = d1.end();

    while(be_d1 != end_d1)
    {
        cout << *be_d1 << " " << endl;
        be_d1++;
    }
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    //输出d2
    auto be_d2 = d2.begin();
    auto end_d2 = d2.end();

    while(be_d2 != end_d2)
    {
        cout << *be_d2 << " " << endl;
        be_d2++;
    }

    return 0;
}
