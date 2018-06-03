#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;

//向前声明
class A;
class B;

class A {
	public:
		A() = default;
		A(std::string n): name(n) { }
		std::string getname() {
			return name;
		}

	private:
	std::string name;
	B* next;
};

class B {
	public:
		B() = default;
		B(std::string n): name(n) { }
	private:
	std::string name;
	class A;
};


int
main(int argc, char *argv[]) 
{
	A a;
	B b;

	A a1("class a");
	B b1("class b");

	return 0;

}
