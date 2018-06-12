#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <array>
#include <list>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::array;
using std::list;


int
main(int argc, char *argv[])
{
    //赋值运算要求等号左右两边的的运算对象具有相同的类型
    //顺序容器(array除外）还定义了assign成员
    //从一个不同但相容的类型赋值，或者从一个容器的子序列赋值
    
    //创建一个list
    list<string> names = {"wang", "liu", "chen"};
    vector<const char*> oldstyle;
    
    //错误，容器类型不匹配
    //names = oldstyle;
    
    //通过assing进行赋值
    names.assign(oldstyle.cbegin(), oldstyle.cend());

	list<string>::iterator begin = names.begin();
	list<string>::iterator end = names.end();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

    return 0;
}
