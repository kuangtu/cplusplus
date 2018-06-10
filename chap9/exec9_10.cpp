#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>

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
	vector<int> v1;
	const vector<int> v2(10,2);

	v1.push_back(1);

	auto it1 = v1.begin();

	cout << *it1 << endl;

	auto it2 = v2.cbegin();

	cout << *it2 << endl;
	
	//此时不能将const_iterator转为iterator
	//vector<int>::iterator it6 = v2.cbegin();
	
	//可以将iterator转为const_iterator
	vector<int>::const_iterator it7 = v1.begin();

	cout << *it7 << endl;

	vector<int>::const_iterator it8 = v1.cbegin();

	cout << *it8 << endl;

	return 0;
}
