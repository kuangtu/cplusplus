#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;

class Person {
	//友元声明
	friend std::istream& read(std::istream&, Person& person);
	friend std::ostream& print(std::ostream&, const Person &person);
	public:
		Person() = default;
		Person(std::string n, std::string a): name(n), addr(a) { }
		std::string getName() const { return name; }
		std::string getAddr() const { return addr; }
		void setName(std::string n) { this->name = n; }
		void setAddr(std::string a) { this->addr = a; }
		std::string getInfo() {
			return name + "-" + addr;
		}

	private:
		std::string name;
		std::string addr;
};

//非成员函数的声明
std::istream&
read(std::istream&, Person&);

std::ostream&
print(std::ostream&, const Person&);

//基于友元声明的定义
std::istream&
read(std::istream& is, Person& person)
{
	is >> person.name >> person.addr;

	return is;
}

std::ostream&
print(std::ostream& os, const Person& person)
{
	os << person.name << person.addr;

	return os;
}

int
main(int argc, char *argv[]) 
{
	Person m("moxuansheng", "pudong");
	Person y("yudonglan", "shanghai");
	Person p;

	cout << m.getInfo() << endl;

	read(std::cin, p);
	print(std::cout, p);

	return 0;

}
