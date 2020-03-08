#ifndef __SALE_DATA_H
#define __SALE_DATA_H

struct Sales_data {
	std::string bookNo;
	std::string bookName;
	unsigned units_sold = 0;
	double price = 0.0;
	double revenue = 0.0;
};

#endif //__SALE_DATA_H
