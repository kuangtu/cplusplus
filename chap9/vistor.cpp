
#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;

int
main(int argc, char *argv[])
{

    //back 和 end 返回首尾元素的引用
    vector<int> c = {1, 2, 3, 4};

    if (!c.empty())
    {
        //begin返回的迭代器解引用
        auto val = *c.begin();

        cout << val << endl;
       
        //val2最后一个元素的拷贝
        auto val2 = c.front();

        cout << val2 << endl;
        
        //last指向尾元素之后的（不存在）一个元素
        auto last = c.end();
        //为了得到最后一个元素，需要将迭代器递减
        //
        auto val3 = *(--last);

        cout << val3 << endl;
        
        auto val4 = c.back();

        cout << val4 << endl;



    }
    
    //基于引用处理
    auto &v = c.back();
    v = 1000;

    cout << c.back() << endl;

    return 0;
}
