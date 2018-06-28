#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

int
main(int argc, char *argv[]) 
{
	int *pi = new int;
	string *ps = new string;


	//值初始化，通过类型名称后面跟一对括号
	string *ps1 = new string;

	string *ps2 = new string();

	int *pi1 = new int;
	//*pi1 值未定义

	int *pi2 = new int();
	//值初始化，*pi2等于0

	int c = 10;

	auto pp1 = new auto(c);

	cout << "pp1:" << *pp1 << endl;

	//分配const对象
	
	const int *pci = new const int(1000);

	const int *ptmp = pci;

	cout << *ptmp << endl;

	pci = new const int(2000);

	cout << *pci << endl;

	//指向const int，不能改变
	//*pci = 200;
	
	return 0;
}

