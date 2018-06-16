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
	double array[] = {1.2, 0.4, 0.8, 1.59};
	vector<double> ia(array, array + sizeof(array) / sizeof(array[0]));

	double sum = 0.0;
	
	//序列中元素的类型必须与第三个参数匹配
	//或者转为了第三个参数的类型
	sum = accumulate(ia.cbegin(), ia.cend(), 0);
	cout << "the sum is: " << sum << endl;

	printf("%s----%s-----%d\n", __FILE__, __FUNCTION__, __LINE__);

	sum = accumulate(ia.cbegin(), ia.cend(), 0.0);
	cout << "the sum is: " << sum << endl;

	return 0;
}
