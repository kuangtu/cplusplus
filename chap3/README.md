# 第三章 字符串、向量和数组

## 向量
###初始化
> 列表初始化，通过花括号的初始化值。

```cpp
vector<string> articles = {"a", "b", "c"}
```
>创建指定数据量的元素

```cpp
vector<int> ivec(10, -1)
```

## 值初始化
> 可以只提供vector对象容纳的元素数量而略去初始值，这个初始值由vector对象中元素的类型决定。
>

## 初始化需要注意的点
**注意花括号和圆括号初始化是的区别。**

```cpp
vector<int> v1(10);		//v1有10个元素，每个值都是0
vector<int> v1{10};		//v1有1个越苏，该元素的值为0
```

**使用花括号的形式但是提供的值不能用来列表初始化，会考虑其他初始化方式，考虑用这样的值构造vector对象了。**

```cpp
vector<string> v7{10}; //v7有10个默认初始化的元素
vector<string> v8{10, "hi"} //v8有10个值为"hi"的元素
```

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

## 练习3.8
> 用while和传统for重写3.6题。何种方式更好。

> while语句

```cpp
	string s("hello world");

	decltype(s.size()) index = 0;
	while(index < s.size())
	{
		s[index] = toupper(s[index]);
		index++;
	}

	cout << s << endl;


```
> 传统for语句

```cpp
	string s("hello world");
	
	for (decltype(s.size()) index = 0; index < s.size(); index++)
	{
		s[index] = toupper(s[index]);
	}

	cout << s << endl;
```
> - while语句更加方便.

## 练习3.9
> 语句不合法，字符串为空。

## 练习3.10
> 将包含标点符号的字符串，去除后输出字符串剩余的部分。
> [代码参见exec3_10](exec3_10.cpp)

## 练习3.11
>如下的for语句是否合法？

```cpp
	const string s = "Keep out!";
	for (auto &c : s) { /*  ... */}
```
> 合法，c的类型是const char，因此不能给c赋值，修改c。

## 练习3.12 
> 下列vector定义是否有误。

```cpp
	vector<vector<int>> ivec;			//正确
	vector<string> svec = ivec;			//错误，类型不同
	vector<string> svec(10, "null");	//初始化了10个字符串，每个字符串为"null"
```

## 练习3.13
> 下列vector对象各包含多少各元素？

```cpp
vector<int> v1;	//没有元素
vector<int> v2(10);	//10个元素，每个的值为0
vector<int> v3(10,42);	//10个元素，每个值为42
vector<int> v4{10};	//一个元素，值为10
vector<int> v5{10,42};	//两个元素，一个为10，一个为42
vector<string> v6{10};	//10个元素，每个元素为空字符串
vector<string> v7{10, "hi"};	//10个元素，每个元素为字符串"hi"
```
## 练习3.14
> 从cin读取一组整数并把他们存入一个vector的对象。
> [代码参见exec3_14](exec3_14.cpp)

## 练习3.15
> 从cin读取一组字符串并把他们存入一个vector的对象。
> [代码参见exec3_15](exec3_15.cpp)

## 练习3.16
> 对于练习3.13中的vector对象的容量和具体内容进行输出。
> [代码参见exec3_16](exec3_16.cpp)

## 练习3.17
> 将字符串类型的vector中的元素转为大写。
> [代码参见exec3_17](exec3_17.cpp)

## 练习3.18
> 下列程序是否合法

```cpp
vector<int> ivec;
ivec[0] = 42;    //不合法，ivec为空

vector<int> ivec(10);	//初始化vector，包含10个元素
ivec[0] = 42;
```

## 练习3.19
>定义含有10个元素的vector对象。

```cpp
方法1:
vector<int> v1(10, 42);
方法2:
vector<int> v1{42,42,42,42,42,42,42,42,42,42}
方法3:
vector<int> v1;
for (int i = 0; i != 10; i++) v1.push_back(42);
```
> 第一种方法更便捷。

## 练习3.20
> 输入一组整数放入到vector对象，将每对相邻整数的和输出。
> [代码参见exec3_20](exec3_20.cpp)


## 练习3.21
> 通过迭代器重写3.16练习。
> [代码参见exec3_21](exec3_21.cpp)

## 练习3.22
>  将迭代器中的text中的内容都改为大写。
>  [代码参见exec3_22](exec3_22.cpp)

## 练习3.23
> 创建一个含有10个整数的vector对象，使用迭代器将所有元素的值都变为之前的两倍。
> [代码参见exec3_23](exec3_23.cpp)

## 练习3.24
> 通过迭代器重做练习3.20.
> [代码参见exec3_24_1](exec3_24_1.cpp)
> [代码参见exec3_24_2](exec3_24_2.cpp)

## 练习3.25
>迭代器重写分数统计。
> [代码参见exec3_25](exec3_25.cpp)

## 练习3.26
> 二分查找使用的是 mind = beg + (end - beg) / 2，而非mid = (beg + end) / 2.
> 因为beg + end 如果值很大时，存在溢出的情况。

## 练习3.27
>以下定义哪些是非法的？

```cpp
	unsigned buf_size = 1024;
    
	int ia[buf_size];			//非法，buf_size应该是常量
	int ia1[4 * 7 - 14];		//合法，计算得到是字面常量
	int ia2[txt_size()];		//非法，txt_size返回应该是常量
	char st[11] = "fundamental";	//非法，字符串超过了存储空间
  
```

## 练习3.28
> 数组中的元素值是什么？

```cpp

string sa[10];
int ia[10];

int
main(int argc, char *argv[]) 
{
	string sa2[10];
	int ia2[10];
	
    return 0;
}

```
sa、sa2是字符串string对象，默认为空。
ia在函数之外定义，初始化为0，ia2在函数内部定义，值是未定义。


## 练习3.29
>相比与vector，数组有哪些确定。
>
> - 数组长度固定，不能随意向数组中增加元素。

## 练习3.30

> 指出下面代码中的索引错误。
>

```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 1; ix <= array_size; ix++)
    ia[ix] = ix;
```
>for循环中的索引应该从0开始，知道array_size -1 .


## 练习 3.31
> 编写程序，定义一个含有10个int的数组，每个元素的值就是它的下标值。
> 
```cpp
constexpr size_t array_size = 10;
int ia[array_size];
for (size_t ix = 0; ix < array_size; ix++)
    ia[ix] = ix;
```

## 练习3.32
> 将3.31中的数组拷贝给另外一个数组。
> 
```cpp
constexpr size_t array_size = 10;
int ia[array_size];
int ib[array_size];
for (size_t ix = 0; ix < array_size; ix++)
    ia[ix] = ix;

for (size_t ix = 0; ix < array_size; ix++)
    ib[ix] = ia[ix]
```

> 通过vector重写程序。
> 
```cpp

```


## 练习 3.33
> 如果scores不初始化会发生什么？
> scores未初始化，数值未定义。