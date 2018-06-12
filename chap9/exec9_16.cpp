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
    list<int> l1 = {1, 2, 3, 4};
    vector<int> v1 = {2, 3, 4, 5};
    vector<int> v2;
    
    //通过assign转为vector类型
    v2.assign(l1.cbegin(), l1.cend());

    if (v2 < v1)
    {
        cout << "the v2 less v1." << endl;
    }



    return 0;
}
