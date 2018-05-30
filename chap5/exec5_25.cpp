#include <iostream>
#include <stdexcept>

using std::cin;
using std::cout;
using std::cerr;
using std::endl;
using std::runtime_error;

int 
integerdiv(int a, int b)
{
    if (b == 0)
    {
        throw runtime_error("the divsior is zero.");
    }

    return a / b;
}

int
main(int argc, char *argv[])
{
    int a, b;
    int res;

    cout << "please input two number:" << endl;
    while (cin >> a >> b)
    {
        try
        {
           res = integerdiv(a, b); 
           cout << "the divsion res is:" << res << endl;
           break;
        }
        catch(runtime_error err)
        {
            cout << err.what()
            <<"Try Again? Enter Y or n" <<endl;

            char c;
            while(cin >> c)
            {
                if (!cin || c == 'n')
                {
                    goto Quit;
                }
                else if (c == 'Y')
                {
                    break;
                }
                else
                {
                    cout << "please input 'Y' or 'n'" << endl;
                }
            }

        }
    }

    Quit:
        return 0;
}
