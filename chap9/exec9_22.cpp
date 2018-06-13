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
    vector<int> vc1;

    //初始化vector
    for (int i = 0; i < 5; i++)
    {
        vc1.push_back(i);
    }

    auto iter = vc1.begin();

    cout << *iter << endl;

    auto mid = vc1.begin() + vc1.size() / 2;

    cout << *mid << endl;

    
    //TODO
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    while(iter != mid)
    {
        printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
        if (*iter % 2 == 0)
        {
            printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
            //需要调整iter迭代器
             cout << "before insert and ++" << *iter << endl;
             vc1.insert(iter, 188);
             //需要增加调整
             ++iter;
             cout << "after insert and ++" << *iter << endl;

        }
        else
        {
            printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
        }
        printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    }

    iter = vc1.begin();
    auto end = vc1.end();

    while(iter != end)
    {
        cout << *iter << endl;
        iter++;
    }

    return 0;
}
