#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int
main(int argc, char *argv[])
{
    string s1, s2;

    if (argc != 3)
    {
        cout <<"need two argument.\n" <<endl;

        return 0;
    }
    //注意字符串初始化，采用了拷贝初始化
    s1 = string(argv[1]);
    s2 = string(argv[2]);

    s1 = argv[1];
    s2 = argv[2];

    cout << "the argument is:"<< s1 + s2 << endl;

    
    return 0;
}

