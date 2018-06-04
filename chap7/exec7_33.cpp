#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;

class Screen {
	public:
		typedef std::string::size_type pos;
		Screen() = default;

		//cursor类内初始化
		Screen(pos ht, pos wd, char c): height(ht), width(wd), 
		contents(ht * wd, c) { }
		char get() const
		{
			return contents[cursor];
		}

		char get(pos ht, pos wd) const;
		Screen& move(pos r, pos c);
        pos size() const;
	private:
        typedef std::string::size_type len;
		pos cursor = 0;
		pos height = 0, width = 0;
		std::string contents;
        len size(len) const;
};

inline
Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;
	cursor = row + c;
	
	return *this;
}

Screen::pos Screen::size() const
{
    return height * width;
}

Screen::len Screen::size(Screen::len l) const
{
    return height * width;
}

inline
char Screen::get(pos r, pos c) const
{
	pos row = r * width;

	return contents[row + c];
}

int
main(int argc, char *argv[]) 
{

	return 0;
}
