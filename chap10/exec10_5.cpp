#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::accumulate;
using std::equal;
using std::string;

int
main(int argc, char *argv[]) 
{
	
	vector<const char*> v1 = {"hello", "world"};
	vector<string> v2 = {"hello", "world"};
	vector<const char*> v3 = {"hello", "world"};
	vector<const char*> v4 = {"hello"};
	int res = 0;

	res = equal(v1.cbegin(), v1.cend(), v2.cbegin());
	cout << "the equal compare res is: " << res << endl;
	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);

	res = equal(v1.cbegin(), v1.cend(), v3.cbegin());
	cout << "the equal compare res is: " << res << endl;
	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);

	//序列长度不相等
	res = equal(v1.cbegin(), v1.cend(), v4.cbegin());
	cout << "the equal compare res is: " << res << endl;

	return 0;
}
