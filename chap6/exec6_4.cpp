#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int
factor(int num)
{
	int iRet = 1;
	while(num > 1)
	{
		iRet *= num;
		num--;
	}

	return iRet;
}

int
main(int argc, char *argv[]) 
{
	int num;
	int res;
	cout << "please input a number:"<<endl;
	while(cin >> num)
	{
		cout << "the number is:" << num << endl;
		if (num < 0 || num > 9)
		{
			cout << "number error, input a number [0-9]." << endl;
			continue;
		}
		else
		{
			res = factor(num);
			cout << "the factor is:" << res << endl;
			break;
		}
	}
	

	return 0;

}
