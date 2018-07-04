#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class HasPtr {
	public:
		//HasPtr(const string &s = string()): ps(new string(s)), i(0) {}
		HasPtr(const string &s): ps(new string(s)), i(0) {}
		HasPtr(const HasPtr & ptr): ps(new string(*(ptr.ps))), i(ptr.i) { }
		void print() {
			cout << *ps << endl;
		}
	private:
		string *ps;
		int i;
};

int
main(int argc, char *argv[]) 
{
	HasPtr ptr("test");
	ptr.print();

	string s = string();

	cout << s << endl;
	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);

	HasPtr ptr1(ptr); 
	ptr1.print();

	return 0;
}
