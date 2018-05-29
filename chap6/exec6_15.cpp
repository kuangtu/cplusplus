#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;

string::size_type
find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size();
	occurs = 0;

	for (decltype(ret) i = 0; i != s.size(); i++)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
			{
				ret = i;
			}

			++occurs;
		}
	}

	return ret;
}

int
main(int argc, char *argv[]) 
{
	const string s1= "hello world";
	char c = 'o';
	//如果声明为int occurs，调用函数参数类型不匹配
	string::size_type occurs;
	auto index = find_char(s1, c, occurs);
	cout << "the occurs number is:" << occurs << endl;
	cout << "the first pos is:" << index << endl;

	return 0;
}
