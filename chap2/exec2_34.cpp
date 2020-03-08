#include <iostream>

int
main(int argc, char *argv[]) 
{

	int i = 0, &r = i;
	auto a = r;
	const int ci = i, &cr = ci;
	auto b = ci;
	auto c = cr;
	auto d = &i;
	//auto e = &ci;
	auto &g = ci;

	a = 42;	
	b = 42;
	c = 42;
	//d = 42;
	*d = 42;
	std::cout << i << std::endl;
	auto e = &c;
	*e = 42;
}
