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
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> v(ia, ia + sizeof(ia) / sizeof(ia[0]));
    list<int> lst(ia, ia + sizeof(ia) / sizeof(ia[0]));
    
    return 0;
}
