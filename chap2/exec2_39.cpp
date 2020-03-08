#include <iostream>
#include <string>

int
main(int argc, char *argv[]) 
{
	struct Sales_data {
		std::string bookNO;
		std::string bookName;
		unsigned units_sold = 0;
		double price = 0.0;
		double revenue = 0.0;
	};

	return 0;

}
