#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;

struct Person {
    std::string getName() const { return name; };
    std::string getAddr() const { return addr; }; 

    std::string name;
    std::string addr;

};

istream&
read(std::istream& is, Person& person)
{
    is >> person.name >> person.addr;

    return is;
}

ostream&
print(ostream &os, const Person& person)
{
    os << person.name << person.addr;

    return os;
}

int
main(int argc, char *argv[])
{
    Person p;
    //read(std::cin, p);
    //print(std::cout, p);

    //输入两个person
    Person p1, p2;

    //读入多个person信息;
    if (read(read(std::cin, p1), p2))
    {
        cout << "input person info finished." << endl;
    }

    print(std::cout, p1);
    cout << endl;
    print(std::cout, p2);

    return 0;
}
