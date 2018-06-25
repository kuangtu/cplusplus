#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>
#include <utility>

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

int
main(int argc, char *argv[]) 
{
	map<string, size_t> word_count;
	string word;

	while(cin >> word)
	{
		//.运算符最高优先级
		//->运算符优先级
		//++较低优先级
		//(1)insert之后，返回了一个pair，first成员是迭代器，second成员是bool值
		//(2)取得迭代器之后，解引用迭代器，提出了map中的元素，元素也是一个pair
		//(3)将map中值的部分增加1
		++word_count.insert({word, 0}).first->second;
	}

	auto begin = word_count.begin();

	while(begin != word_count.end())
	{
		cout << begin->first << " " << begin->second << endl;
		begin++;
	}


	return 0;
}
