#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;


int
main(int argc, char *argv[])
{
    int a, b;

    cout << "please input two number:" << endl;
    cin >> a >> b;
    if (b == 0)
    {
        throw runtime_error("the divsior is zero.");
    }
    cout << "the divsion is:" << static_cast<double>(a)/b << endl;

    return 0;
}
