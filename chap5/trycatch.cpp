#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;

int
intdouble(int a, int b)
{
    if (a == b)
    {
        cout<< "the number is:%" << a * 2 << endl;
    }
    else
    {
        throw runtime_error("two integer must be equal.");
    }

    return a * 2;
}

int
main(int argc, char *argv[])
{
    int a1, a2;
    cout << "please input two integer:" << endl;
    while(cin >> a1 >> a2)
    {
        try
        {
            cout << intdouble(a1, a2) << endl;
            break;
        }
        catch(runtime_error err)
        {
            cout << err.what()
                << "Try Again? Enter Y or n" << endl;
            char c;
            cin >> c;
            if (!cin || c == 'n')
                break;
        }
    }


    
    return 0;
}

