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

int
main(int argc, char *argv[])
{
    list<string> lst;
    string word;
    
    auto iter = lst.begin();

    //等价于push_front，
    //iter初始化为begin，之后插入在iter所指向的元素之前的位置。
    //insert返回的迭代器正好指向新的元素
    //也就是一直指向了begin
    while(cin >> word)
    {
        iter = lst.insert(iter, word);
    }

    auto end = lst.end();

    //iter 在增加过程中，始终指向了begin头部
    while(iter != end) 
    {
        cout << *iter << endl;
        iter++;
    }

    return 0;
}
