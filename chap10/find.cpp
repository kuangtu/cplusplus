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


int
main(int argc, char *argv[])
{
    vector<int> vint = {1, 2, 3, 4, 5};

    auto begin = vint.begin();
    auto end = vint.end();

    int i = 10;

    auto result = find(begin, end, i);

    cout << "The value "<< i 
        << (result == end ? " is not present" : " is present") << endl;

    int ia[] = {1, 2, 3, 4, 5, 6};
    int val = 2;

    
    auto res = find(ia + 1, ia + 4, 2);

    cout << *res << endl;

    //TODO FIX
    //int *ret = find(begin(ia), end(ia), 8);
    //cout << *ret << endl;
    
    return 0;
}
