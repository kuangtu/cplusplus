#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;


int
main(int argc, char *argv[])
{
    int a, b;

    cout << "please input two number:" << endl;
    cin >> a >> b;
	cout << "the div is:" << static_cast<double>(a)/b << endl;

    return 0;
}
