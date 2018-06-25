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


class StrBlob {
	public:
		typedef vector<string>::size_type size_type;
		StrBlob();
		StrBlob(initializer_list<string> il);
		size_type size() const { return data->size(); }
		bool  empty() const { return data->empty(); }

		//add and del item
		void push_back(const string &t) { data->push_back(t); }
		void pop_back();
	private:
		shared_ptr<vector<string>> data;
		void check(size_type i, const string &msg) const;
};

StrBlob::StrBlob(): data(make_shared<vector<string>>()) { }

StrBlob::StrBlob(initializer_list<string> il): data(make_shared<vector<string>>(il)) { }

void
StrBlob::check(size_type i, const string &msg) const
{
	if (i >= data->size())
	{
		throw out_of_range(msg);
	}
}

int
main(int argc, char *argv[]) 
{

	return 0;
}
