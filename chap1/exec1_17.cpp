#include <iostream>
int
main(int argc, char *argv[]) 
{
	
	int currVal = 0, val = 0;
	if (std::cin >> currVal)
	{
		int icnt = 1;
		while(std::cin >> val)
		{
			if (val == currVal)
			{
				icnt++;
			}
			else
			{
				std::cout << currVal << "occurs " << icnt << " times" << std::endl;

				currVal = val;
				icnt = 1;
			}
		}

		std::cout << currVal << "occurs " << icnt << " times" << std::endl;

	}

	return 0;

}
