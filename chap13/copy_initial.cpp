#include <iostream>
#include <string>

using std::string;

int
main(int argc, char *argv[]) 
{
	//直接初始化
	string dots(10, '.');
	string s(dots);

	//拷贝初始化
	string s1 = "0-000-0000";

	string s2 = string(100, '0');

	return 0;
}
