

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
    vector<int> c = {1};

    //一个元素，front back指向相同
    if (!c.empty())
    {
        auto val = *c.begin();
        
        cout << val << endl;

        auto val2 = c.front();

        cout << val2 << endl;

        auto last= c.end();

        auto val3 = *(--last);

        cout << val3 << endl;

        auto val4 = c.back();

        cout << val4 << endl;


    }
    return 0;
}
