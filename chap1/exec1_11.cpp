#include <iostream>

int
main(int argc, char *argv[]) 
{
	int v1, v2;
	int a, b;

	std::cout << "Please input two number." << std::endl;

	std::cin >> v1 >> v2;
	
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
		std::cout << a << " ";
		++a;
	}

	std::cout << std::endl;
}
