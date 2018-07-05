#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
	public:
		HasPtr(const string &s = string()):ps(new string(s)), i(0) { }
		HasPtr(const HasPtr &p):ps(new string(*p.ps)), i(p.i) { }
		HasPtr& operator=(const HasPtr &);
		~HasPtr() { delete ps; }
	private:
		string *ps;
		int i;
};

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
	auto newp = new string(*rhs.ps);
	delete ps;	//释放旧的内存

	ps = newp;

	i = rhs.i;

	return *this;

}

int
main(int argc, char *argv[]) 
{
	HasPtr p1("test");
	HasPtr p2 = p1; 
	return 0;
}
