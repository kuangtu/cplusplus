#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int
main(int argc, char *argv[]) 
{
	cout << "sizeof(int)" << sizeof(int) << endl;
	cout << "sizeof(long)" << sizeof(long) << endl;
	cout << "sizeof(float)" << sizeof(float) << endl;
	cout << "sizeof(double)" << sizeof(double) << endl;
	cout << "sizeof(long*)" << sizeof(long*) <<endl;

	string s;
	cout << "sizeof(s)" << sizeof(s) << endl;	//只返回该类型固定部分的大小

	int a = 10;
	int &b = a;
	cout << "int &b" << sizeof(b) << endl;

	int c[10];
	cout << "int array[10]" << sizeof(c) << endl;
	cout << "array number" << sizeof(c) / sizeof(*c) << endl;	//计算数组中元素的数量
	cout << "array number" << sizeof(c) / sizeof(c[0]) << endl;


	return 0;
}
