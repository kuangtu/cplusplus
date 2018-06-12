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
    vector<int> v1 = {1, 2, 3, 4, 5};
    vector<int> v2 = {1, 2, 3};
    vector<int> v3 = {3,  3};

    //元素相同，但是数目小，因此小
    cout << (v2 < v1) << endl;

    //元素不同，取决于第一个不同元素的比较结果
    //v1小于v3，因为v3中的3，大于v1中的第一个1
    cout << (v1 < v3) << endl;

    return 0;
}
