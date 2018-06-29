#include <new>
#include <iostream>
#include <vector>
#include <utility>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::make_shared;


void
initvc(shared_ptr<vector<int>> p)
{
    int i;
    while(cin >> i)
    {
        p->push_back(i);
    }
}

void
printvc(shared_ptr<vector<int>> p)
{
    auto begin = p->begin();

    while(begin != p->end())
    {
        cout << *begin << " ";
        cout << endl;

        ++begin;
    }
}


int
main(int argc, char *argv[])
{
    shared_ptr<vector<int>> pv = make_shared<vector<int>>();

    initvc(pv);

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    printvc(pv);

    return 0;
}
