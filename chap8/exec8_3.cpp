#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;


int
main(int argc, char *argv[]) 
{
	//文件结束符终止
	//std::string i;
	//
	//while(std::cin >> i)
	//{
	//	cout << i << endl;
	//}
	
	int i;
	//输入类型不同，比如：输入了字符串
	//文件结束符终止
	//Ctrl+D
	while(std::cin >> i)
	{
		cout << i << endl;
	}

	return 0;
}
