#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <deque>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::deque;


int
main(int argc, char *argv[]) 
{
	deque<string> strdeq;
	string word;

	while(cin >> word)
	{
		strdeq.push_front(word);
	}

	auto begin = strdeq.begin();
	auto end = strdeq.end();

	while(begin != end)
	{
		cout << *begin << endl;
		++begin;
	}


	return 0;
}
