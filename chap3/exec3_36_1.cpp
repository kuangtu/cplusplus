#include <iostream>
#include <string>
#include <vector>
#include <cstddef>

using std::cin;
using std::endl;
using std::cout;
using std::string;
using std::vector;
using std::begin;
using std::end;

int
main(int argc, char *argv[]) 
{

	constexpr size_t alen = 10;
	constexpr size_t blen = 10;

	int a[alen] = {0};
	int b[blen] = {0};

	auto a1 = begin(a) - end(a);
	auto b1 = begin(b) - end(b);

	if (a1 != b1)
	{
		cout << "the two array's len diff.\n" << endl;

		return 0;
	}

	for (size_t i = 0; i < alen; i++)
	{
		if (a[i] != b[i])
		{
			cout << "the two array diff" << endl;

			return 0;
		}
	}

	cout << "the two array same.\n" << endl;

	return 0;

}
