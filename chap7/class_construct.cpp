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
    
    //默认构造函数，无需任何实参
    //（1）如果存在类内的初始值，用它来初始化成员
    //（2）否则，默认初始化该成员
    //C++11中，"= default"紧跟在声明之后
    Person() = default;
    
    //构造函数初始列表
    Person(const std::string &s) : name(s) { }

    Person(const std::string &sname, const std::string &saddr) :
    name(sname), addr(saddr) { }
    
    //声明
    Person(std::istream &s);

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

//类的构造函数定义在外部
Person::Person(std::istream &s) 
{
    read(s , *this);
}

int
main(int argc, char *argv[])
{

    return 0;
}
