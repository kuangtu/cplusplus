#include <iostream>
#include <string>
#include <cstring>
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
	int ia[3][4] = {0};


	for (int (*p)[4] = ia; p != ia + 3; p++)
	{
		for (int *q = *p; q!= *p + 4; q++)
		{
			cout << *q << " ";
		}
		cout << endl;
	}
	cout << "..." << endl;

	for (int(&p)[4] : ia)
	{
		for (int q : p)
		{
			cout << q << " ";
		}
		cout << endl;
	}
	cout << "..." << endl;

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			cout <<ia[i][j] << " ";
		}

		cout << endl;
	}
	
	cout << "..." << endl;

	return 0;

}
