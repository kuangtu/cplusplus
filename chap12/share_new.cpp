#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>
#include <utility>
#include <list>
#include <memory>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::string;
using std::ifstream;
using std::istringstream;
using std::multiset;
using std::vector;
using std::pair;
using std::initializer_list;
using std::shared_ptr;
using std::make_shared;
using std::out_of_range;

//错误，隐式转化为share_ptr<int>
//shared_ptr<int> clone(int p)
//{
//	return new int(p);
//}


int
main(int argc, char *argv[]) 
{
	//直接初始化形式，初始化一个智能指针
	shared_ptr<double> p1;

	//不能隐式转化
	//shared_ptr<int> p2 = new int(1024);
	
	//直接初始化
	shared_ptr<int> p2(new int(1024));

	return 0;
}
