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
	vector<int> v1 = {1, 2, 3, 4};
	vector<int> v2;
	//直接赋值	
	v2 = v1;

	vector<int>::iterator begin = v1.begin();
	vector<int>::iterator end = v1.end();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);

	begin = v2.begin();
	end = v2.end();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}

	list<int> listints = {1, 2, 3, 4 };
	list<int>::iterator begin1 = listints.begin();
	list<int>::iterator end1 = listints.end();
	vector<double> vectordouble(begin1, end1);

	vector<double>::iterator begin2 = vectordouble.begin();
	vector<double>::iterator end2 = vectordouble.end();

	while(begin2 != end2)
	{
		cout << *begin2 << endl;
		++begin2;
	}







	return 0;
}
