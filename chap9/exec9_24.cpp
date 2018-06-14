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


void
printelem(vector<int> v)
{
    if (!v.empty())
    {
        auto val = v.front();
        cout << val << endl;

        auto val2 = v.at(0);
        cout << val2 << endl;

        auto val3 = *(v.begin());
        cout << val3 << endl;

        auto val4 = v[0];
        cout << val4 << endl;
    }
}

int
main(int argc, char *argv[])
{
    vector<int> v = {1, 2, 3};
    printelem(v);

    vector<int> t;
    printelem(t);

    return 0;
}
