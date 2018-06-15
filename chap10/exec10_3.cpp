#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::accumulate;

int
main(int argc, char *argv[])
{
	int array[] = {1, 2, 3, 4, 5};
	vector<int> ia(array, array + sizeof(array) /sizeof(array[0]));

	int sum = accumulate(ia.cbegin(), ia.cend(), 0);

	cout  << sum <<endl;

	return 0;
}
