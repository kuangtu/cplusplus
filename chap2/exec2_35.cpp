#include <iostream>

int
main(int argc, char *argv[]) 
{
	
	const int i = 42;
	auto j = i;
	j = 33;
	std::cout << j << std::endl;
	const auto &k = i;
	auto *p = &i;
	const auto j2 = i;
	//const auto &k2 = i;
	auto &k2 = i;

	return 0;
}
