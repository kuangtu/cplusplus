
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int
main(int argc, char *argv[]) 
{
	int v1, v2;
	int a, b;

	cout << "Please input two number." << endl;

	cin >> v1 >> v2;
	
	//判断大小
	if (v1 <= v2)
	{
		a = v1;
		b = v2;
	}
	else
	{
		a = v2;
		b = v1;
	}

	while(a <= b)
	{
		cout << a << " ";
		++a;
	}

	cout << endl;
}
