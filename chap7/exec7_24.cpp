#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;

class MyScreen {
	public:
		int pos;
		//默认构造函数
		MyScreen() = default;

		MyScreen(int ht, int wd): height(ht), width(wd), contents(ht * wd, ' ') {

		}

		MyScreen(int ht, int wd, char c): height(ht), width(wd), contents(ht * wd , c) {

		}

		char getposchar() const
		{
			return contents[cursor];
		}
	private:
		int cursor = 0;
		int height = 24, width = 80;
		std::string contents;
};

int
main(int argc, char *argv[]) 
{
	MyScreen myscreen;
	cout << (int)myscreen.getposchar() << endl;

	MyScreen screen1(20, 60, 'd');
	cout << (int)screen1.getposchar() <<  endl;

	MyScreen screen2(30, 90);
	cout << (int)screen2.getposchar() <<  endl;
	return 0;
}
