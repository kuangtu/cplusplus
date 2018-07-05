#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
	public:
		HasPtr(const string &s = string()):ps(new string(s)), i(0), use(new size_t(1)) { }
		HasPtr(const HasPtr &p):ps(new string(*p.ps)), i(p.i), use(p.use) { ++*use;}
		HasPtr& operator=(const HasPtr &);
		~HasPtr() { 
			if (--*use == 0)
			{
				delete ps;
				delete use;
			}
		}
	private:
		string *ps;
		int i;
		size_t *use;
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

	//赋值或者拷贝的时候,改变引用计数
	HasPtr p2 = p1; 

	return 0;
}
