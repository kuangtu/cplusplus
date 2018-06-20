#include <iostream>
#include <map>
#include <string>
#include <set>

using std::cout;
using std::cin;
using std::endl;
using std::set;
using std::map;
using std::string;

int
main(int argc, char *argv[]) 
{

	map<string, size_t> word_count;
	string word;
	set<string> exclude = {"The", "this", "that", "and", "or", "the"}; 
	while(cin >> word)
	{
		//如果找不到，则返回set的尾迭代器
		if (exclude.find(word) == exclude.end())
		{
			++word_count[word];
		}
	}
	return 0;
}
