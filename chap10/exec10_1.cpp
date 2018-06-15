#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;

int
main(int argc, char *argv[])
{

    vector<int> vint = {1, 2, 3, 4, 5};
    int c;
    auto begin = vint.begin();
    auto end = vint.end();

    c = count(begin, end, 1);

    cout << c << endl;

    return 0;
}
