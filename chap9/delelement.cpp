#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::list;

void
printelem(list<int> lst)
{

    auto it = lst.begin();
    while(it != lst.end())
    {
        cout << *it << endl;
        ++it;
    }
}

void
printelemv(vector<int> v)
{

    auto it = v.begin();
    while(it != v.end())
    {
        cout << *it << endl;
        ++it;
    }
}

int
main(int argc, char *argv[])
{
    //c.pop_back
    //c.pop_front
    //删除首位元素，c为空，函数未定义
    //c.erase
    //删除迭代器p所指定的元素，返回一个指向被删除元素之后的迭代器,
    //若P指向了尾元素，则返回尾后迭代器，若p是尾后迭代器，则函数行为未定义
    //c.erase(b,e)
    //删除迭代器b和e所指定范围内的元素，返回一个指向最后一个被删除元素之后元素的迭代器，若e本身就是尾后迭代器，则函数返回尾后迭代器

    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto it = lst.begin();
    while (it != lst.end())
    {
        //删除奇数
        if (*it % 2)
        {
            it = lst.erase(it);
        }
        else
        {
            ++it;
        }
    }

    printelem(lst);
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    
    //清空 
    lst.clear();
    printelem(lst);
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    //通过迭代器指定删除的范围
    vector<int> v = {1, 2, 3, 4, 5};
    auto elem1 = v.begin();
    elem1++;
    elem1++;
    auto elem2 = v.end();
    //删除到了尾后迭代器，此时返回的也是尾后迭代器
    //删除了从第三个元素开始到尾部的元素
    auto  i = v.erase(elem1, elem2);
    printelemv(v);
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    
    auto start = v.begin();
    while(start != i)
    {
        cout << *start << endl;
        ++start;
    }


    return 0;
}
