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



int
main(int argc, char *argv[]) 
{
	MyScreen screen1(24, 80, 'a');
	//当前位置字符
	cout << screen1.get() << endl;

	cout << screen1.get(10, 8) << endl;

	screen1.move(1,4).set('#');

	cout << screen1.get() << endl;

	//调用测试
	MyScreen myscreen(5, 5, 'X');
	myscreen.move(4,0).set('#').display(std::cout);
	cout << "\n";
	myscreen.display(std::cout);
	cout << "\n";

	MyScreen screen3(2,4, 'Y');
	const MyScreen screen4(2,4);
	//调用了非const函数
	screen3.set('C').display(std::cout);
	screen4.display(std::cout);


	return 0;

}
