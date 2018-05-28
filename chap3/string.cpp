#include <iostream>
#include <cctype>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int
main(int argc, char* argv[])
{
	cout <<"string initialization"<<endl;
	//字符串初始化
	//拷贝初始化，采用=
	string s4 = "hello world";
	cout << s4 << endl;

	//直接初始化，省略了=
	string s5("hellow world");
	cout << s5 << endl;

	string s6(10,'c');
	cout << s6 <<endl;

	string s7 = s6;
	cout << s7 <<endl;

	//字符串操作
	//长度
	/*
	Because size returns an unsigned type, it is essential to remember that
	expressions that mix signed and unsigned data can have surprising results (§ 2.1.2, p.
	36). For example, if n is an int that holds a negative value, then s.size() < n will
	almost surely evaluate as true. It yields true because the negative value in n will
	convert to a large unsigned value.
	*/
	string line = "hello world!";
	auto len = line.size();
    
	//字符串比较
	string cmp1 = "Hello";
	string cmp2 = "Hello W";

	if (cmp1 > cmp2)
	{
		cout << "string cmp1 less than cmp2" << endl;
	}

	string con1 = "hello,";
	string con2 = "world";
	cout << con1 + con2 <<endl;
	char c = 'a';
	cout << isalpha(c) << endl;


	//字符串改变大小写
	for (auto index = 0; index != con1.size(); ++index)
	{
		con1[index] = toupper(con1[index]);
	}

	cout << con1 << endl;


	return 0;

}
