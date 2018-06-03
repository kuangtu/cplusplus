
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
		MyScreen(): contents(height * width, 'c') {
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

	cout << myscreen.getposchar() << endl;

	return 0;
}
