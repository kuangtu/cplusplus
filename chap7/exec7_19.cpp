#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;

class Person {
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

//不是类成员，只是接口的一部分
//不能访问类的非公有成员
//istream&
//read(std::istream &is, Person person)
//{
//	is >> person.name >> person.addr;
//
//	return is;
//}

int
main(int argc, char *argv[]) 
{
	Person m("moxuansheng", "pudong");
	Person y("yudonglan", "shanghai");

	cout << m.getInfo() << endl;
	return 0;

}
