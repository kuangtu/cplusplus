#include <iostream>
#include <fstream>
#include <vector>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;


int
main(int argc, char *argv[]) 
{
	vector<string> strvec;
	string s1 = "hello";
	string s2 = "world";
	string s3 = "finished.";
	strvec.push_back(s1);
	strvec.push_back(s2);
	strvec.push_back(s3);
	vector<string>::iterator begin = strvec.begin();
	vector<string>::iterator end = strvec.end();

	while(begin != end)
	{
		cout<< *begin << endl;
		begin++;
	}

    //通过swap交互两个容器的内容

    vector<int> v1 = {1,2};
    vector<int> v2 = {3, 4, 5};

    vector<int>::iterator begin1 = v1.begin();
    vector<int>::iterator end1 = v1.end();
	while(begin1 != end1)
	{
		cout<< *begin1 << endl;
		begin1++;
	}

    printf("%s==========%d===========%s\n", __FILE__, __LINE__, __FUNCTION__);

    swap(v1, v2);
    begin1 = v1.begin();
    end1 = v1.end();
	while(begin1 != end1)
	{
		cout<< *begin1 << endl;
		begin1++;
	}

	return 0;
}
