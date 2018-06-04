#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::flush;
using std::ends;
using std::unitbuf;


int
main(int argc, char *argv[]) 
{
	//刷新缓冲区
	cout << "hi" << endl;	//换行并刷新

	cout << "hi" << flush; //刷新buffer，不附加任何额外字符

	cout << "hi" << ends;	//刷新buffer，增加一个空字符

	//每次操作之后，想刷新缓冲区，
	//可以使用unitbuf操作符，告诉流在接下来的每次写操作之后
	//都进行一次flush操作。
	//无缓冲
	cout << unitbuf;


	return 0;
}
