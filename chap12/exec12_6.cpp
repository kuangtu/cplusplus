#include <new>
#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void
initvc(vector<int> *p)
{
    int i;
    while(cin >> i)
    {
        p->push_back(i);
    }
}

void
printvc(vector<int> *p)
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

    vector<int> *pv = new vector<int>;

    initvc(pv);

    printvc(pv);

    delete pv;

    pv = nullptr;

    return 0;
}
