
#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;
using std::vector;


//将某个成员函数作为友元
//MyScreen类只为clear函数提供访问
//（1）首先定义Window_mgr类，声明clear函数，但是不能定义；
//（2）在clear使用MyScreen的成员之前，必须现声明MyScreen
//（3）定义Screen，包括对于clear的友元声明
//（4）最后定义clear，此时才可以使用MyScreen的成员

class MyScreen;


class Window_mgr {
    public:
        Window_mgr() = default;
        //窗口屏幕编号
        using ScreenIndex = std::vector<MyScreen>::size_type;
        void clear(ScreenIndex);
        void addscreen(MyScreen &s)
        {
            screens.push_back(s);
        }
        void printvector();
    private:
        std::vector<MyScreen> screens;
};


class MyScreen {
    //友元函数
    friend void Window_mgr::clear(ScreenIndex);

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
		
		//将所有字符放入到字符串中，
		//根据屏幕移动的row和col
		//找到在字符串中的位置
		MyScreen& move(int r, int c)
		{
			int row = r * width;
			cursor = row + c;
			return *this;
		}

		char get(int r, int c) const
		{
			int row = r * width;
			return contents[row + c];
		}

		char get() const
		{
			return contents[cursor];
		}

		MyScreen& set(char c)
		{
			contents[cursor] = c;
			return *this;
		}

		MyScreen& set(int r, int col, char c)
		{
			contents[r * width + col] = c;

			return *this;
		}

		//根据对象是否是const重载了diplay函数
		//do_display是const函数，返回的对象
		//指向了const对象
		MyScreen& display(std::ostream& os)
		{
			//将指向非常量的指针转化为指向常量的指针
			do_display(os);

			return *this;
		}

		MyScreen display(std::ostream& os) const
		{
			do_display(os);

			return *this;
		}

	private:
		int cursor = 0;
		int height = 24, width = 80;
		std::string contents;

		//私有成员函数
		void do_display(std::ostream& os) const
		{
			os << contents;
		}
};

//用到MyScreen类，需要知道类的结构大小
//因此实现s.content等，需要在MyScreen定义之后
void Window_mgr::clear(ScreenIndex i)
{

    MyScreen &s = screens[i];

    s.contents = string(s.height * s.width, ' ');

}

void Window_mgr::printvector()
{
    for (auto  &i : screens)
    {
        i.display(std::cout);
    }
}

int
main(int argc, char *argv[])
{

    return 0;
}
