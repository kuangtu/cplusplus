#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>
#include <stack>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::stack;


int
main(int argc, char *argv[]) 
{

	stack<int> intStack;

	for (int i = 0; i < 10; i++)
	{
		intStack.push(i);
	}

	while(!intStack.empty())
	{
		int value = intStack.top();

		cout << value << endl;

		intStack.pop();
	}

	return 0;
}
