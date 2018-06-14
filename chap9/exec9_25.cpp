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

    //通过迭代器指定删除的范围
    vector<int> v = {1, 2, 3, 4, 5};
    auto elem1 = v.begin();

    //两个迭代器相同,删除空的范围，无效操作
    //The iterator first does not need to be dereferenceable if first==last: erasing an empty range is a no-op. 
    auto after = v.erase(elem1, elem1);
    
    //after仍然指向了begin
    cout << *after << endl;
    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);
    printelemv(v);

    return 0;
}
