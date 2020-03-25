# 第六章 函数

##　使用引用避免拷贝
> 拷贝大的类烈性对应或者容器对象比较低效。


## const形参和实参
> 当用实参初始化形参的时候，会忽略顶层的const，当形参有顶层const时，传给它的常量对象或者非常量对象都是可以的。

## 数组形参
> 当为函数传递一个数组时，实际上传递的指向数组首元素的指针.
> 如下三个声明是等价的：

```cpp
void print(const int*);
void print(const int[]);
void print(const int[10]);
```
> 可以显示传递一个表示数组大小的形参
> 使用标准库规范

```cpp
int j[2] = {0, 1};
begin(j), end(j)
```

##　数组引用形参


## 练习6.1
> 实参和形参的区别？
> - 函数定义时使用形参列表；
> - 函数调用时使用实参列表；
> - 实参是形参的初始值。


## 练习6.2
> 指出下列函数的错误？如何修改？

```cpp
(a) int f() {
          string s;
          // ...
          return s;
    }
    //返回类型不一致，修改为string f()
(b) f2(int i) { /* ... */ }
	//没有返回类型,修改为void f2(int i)
(c) int calc(int v1, int v1) { /* ... */ }
	//形参重复定义，修改为calc(int v1, int v2)
(d) double square (double x) return x * x; 
	//需要定义函数体，修改为 { return x * x}
```

## 练习6.3
>　编写阶乘函数.

```cpp
int fact(int n)
{
	int ret = 1;
	while(n > 1)
	{
		ret *= n;
		--n;
	}

	return ret;
}

```

## 练习6.4
> 输入一个整数，计算生成该数字的阶乘。
> [代码参见exec6_4](exec6_4.cpp)


##　练习6.5
>　编写一个函数，输出实参的绝对值。

```cpp
int
getabs(int num)
{
	return abs(num);
}

int
main(int argc, char *argv[]) 
{
	int a;

	cout << "please input a  number." << endl;
	cin >> a;
	cout << getabs(a) << endl;

	return 0;
}
```

##　练习6.6
> 说明形参、局部变量以及局部静态变量的区别。
> - 形参和函数体内部定义的变量统称为局部变量（local variable），仅在函数的作用域内可见。
> - 如果需要局部变量的声明周期贯穿函数调用及之后，通过静态局部变量进行定义。

## 练习6.7
> 编写一个函数，当第一次调用时返回0，以后每次调用返回值加１．

```cpp
int func()
{
	static int i = 0;
	
	return i++;
}
```

## 练习6.8
> 编译一个名为Chapter6.h的头文件，包含6.1节练习中的函数声明。
> [代码参见chapter6.h](chapter6.h)

## 练习6.9
> 编写factor.cc和factmain.cc文件，理解分离式编译。
> [代码参见fact.cc、factmain.cc](fact.cc) (factmain.cc)

## 练习6.10
> 编写函数，通过指针形参交换两个整数的值。
> [代码参见exec6_10](exec6_10.cpp)

## 练习 6.11
> 编写并验证reset函数.
> [代码参见exec6_11](exec6_11.cpp)

## 练习 6.12
>　修改练习6.10中的程序，使用引用而非指针交换两个整数。
>　[代码参见exec6_12](exec6_12.cpp)
>　通过引用方式实现更容易理解，直接基于数值的交换。

## 练习6.13
> 说明以下两个函数声明的区别.

```cpp
void f(T)		//参数是T类型
void f(&T)		//参数是T类型的引用
``

## 练习6.14
> 举例应该是引用类型的例子

```cpp
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size();

	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}

	return ret;
}

```
> 通过引用可以变相的返回多个值。

## 练习6.15
> 说明find_char函数中三个形参为什么是现在的类型？

```cpp
string::size_type find_char(const string &s, char c, string::size_type &occurs)
{
	auto ret = s.size();

	occurs = 0;
	for (decltype(ret) i = 0; i != s.size(); ++i)
	{
		if (s[i] == c)
		{
			if (ret == s.size())
				ret = i;
			++occurs;
		}
	}

	return ret;
}

```
> - const string& 常量引用，不需要进行参数的拷贝，也不会进行修改；
> - char c，c字符晋作为查找
> - string::size_type &occurs，需要计数，修改occurs，所有为引用可以改变值.


## 练习6.16
> 指出下列函数的局限性并设法改善。

```cpp

bool 
is_empty(string &s) { return s.empty();}

//传入	cout << is_empty("hello world") << endl;　会报错
```
> 不能把const对象字面值或者需要类型转换的对象传递给普通的引用形参。

##　练习6.17
> 编写一个函数，判断string对象是否含有大写字母。编写另外一个函数，把string对象全都改成小写形式。
> [代码参见exec6_17](exec6_17.cpp)
> 其中的形参类型不同，一个是常量引用，一个普通的引用形参。

## 练习6.18
> 为下面的函数编写函数声明.

```cpp
(a) bool compare(matrix&, matrix &)
(b) vector<int>::iterator change_val(int, vector<int>::iterator)
```

## 练习6.19
>哪些调用合法？

```cpp
double calc(double);
int count(const string &, char);
int sum(vector<int>::iterator, vector<int>::iterator, int);
vector<int> vec(10);
(a) calc(23.4,55.1);	//不合法，参数数目不正确
(b) count("abcda", 'a')	//合法
(c) calc(66);	//合法，可以将int类型转为double类型
(d) sum(vec.begin(), vec.end(), 3.8)　//合法
```

## 练习6.21
>编写函数，比较两个整数。

```cpp
int
comp(int *a, int &b)
{
	return *a > b ? *a : b;
}

```

## 练习6.22
>　编写函数，交换两个int指针。

```cpp
void
exchg(int* &a, int* &b)
{
    int *c;

    c = a;
    a = b;
    b = c;
}

```
> [代码参见exec6_22](exec6_22.cpp)

## 练习6.23
> [代码参见exec6_23](exec6_23.cpp)

## 练习6.24
>描述下面函数的行为：

```cpp
void print(const int ia[10])
{
	for (size_t i = 0; i != 10; ++i)
    	cout << ia[i] << endl;
}
```
> 传入的数组名称转为了指向数组的指针，const int ia[10]和const int *一样。
> 函数题内部限定了能够处理的数组大小为10，但是函数参数只需要传入const int *即可；
> 如果限定数组数目为10,const int (&ia)[10].

## 练习6.25
> [代码参见exec6_25](exec6_25.cpp)

## 练习6.26
> [代码参见exec6_26](exec6_26.cpp)

