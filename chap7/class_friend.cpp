#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::initializer_list;
using std::istream;
using std::ostream;
using std::string;


int
main(int argc, char *argv[]) 
{
	Person m("moxuansheng", "pudong");
	Person y("yudonglan", "shanghai");

	cout << m.getInfo() << endl;
	return 0;

}
