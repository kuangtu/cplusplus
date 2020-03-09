# 第三章 字符串、向量和数组

## 练习3.1
> 重写1.4.1节的练习。
>
[代码参见exec3_1_1](exec3_1_1.cpp)
>
[代码参见exec3_1_2](exec3_1_2.cpp)
>
[代码参见exec3_1_3](exec3_1_3.cpp)
>
[代码参见exec3_1_4](exec3_1_4.cpp)
>
[代码参见exec3_1_5](exec3_1_5.cpp)
>
[代码参见exec3_1_6](exec3_1_6.cpp)

## 练习3.2
> 编写程序从标准输入读取一行。

```cpp
#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int
main(int argc, char *argv[]) 
{
	string len;
	while(getline(cin, len))
	{
		cout << "input line is " << len << endl;
	}

	return 0;

}


```

> 编写程序从标准输入一次读取一个单词。

```cpp
#include <iostream>
#include <string>

using std::cin;
using std::endl;
using std::cout;
using std::string;

int
main(int argc, char *argv[]) 
{
	string len;
	while(cin >> len)
	{
		cout << "input line is " << len << endl;
	}

	return 0;

}
```

## 练习3.3 
> 说明string类输入运算符和getline函数分别如何处理空白字符。
>
> string类对象会自动忽略开头的空白字符，从第一个真正的字符开始读起，直到遇见下一处空白为止。
>
> getline读取空白字符串，直到遇到换行符为止，**换行符也被读取**

## 练习3.4
> 比较字符串即字符串的长度.
>
> [代码参见exec3_4](exec3_4.cpp)
>

## 练习3.5
> 连接字符串。
>
[代码参见exec3_5](exec3_5.cpp)


## 练习3.6
>　for语句将字符串内的所有字符用X代替。
>
> [代码参见exec_3_6](exec3_6.cpp)

## 练习3.7
> 将3.6中的循环控制变量修改为char。

```cpp
#include <iostream>
#include <cctype>

using std::endl;
using std::cin;
using std::cout;
using std::string;

int
main(int argc, char *argv[]) 
{

	string s("hello world");
	for (char c: s)
	{
		c = toupper(c);
	}

	cout << s << endl;
	return 0;

}
```
>ｃ是char类型的变量，不会修改string中的内容。

