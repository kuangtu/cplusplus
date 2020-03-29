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


## 引用返回左值

## 列表初始化返回值
> C++11，函数可以返回花括号包围的值的列表。

```cpp

vector<string> process()
{
	//expected 和 actual 是 string对象
    if (expected.empty())
    	return {};
    else if (exepected == actual)
    	return {"functionX", "okay"};
    else
    	return {"functionx", expected, actual}
}
```

## 返回数组指针
> 因为数组不能被拷贝，所以函数不能返回数组。
> 但可以返回数组的指针或者引用。
> 尾置返回类型


## 重载和const形参
> 一个用户顶层const的形参无法和另一个没有顶层const的形参区分开来.
> 如果形参是某种类型的指针或者引用，则通过区分其指向的是常量对象还是非常量对象可以实现函数重载。

```cpp
Record lookup(Accout&);
Record lookup(const Accout&);
```


## 默认实参
> 默认实参作为形参的初始值出现在形参列表中。
> ** 一个形参被赋予了默认值，后面的所有形参都必须有默认值。**
> ** 多次声明同一个函数也是合法的。在给定的作用域中一个形参只能被赋予一次默认实参。**
> 局部变量不能作为默认实参。
> 函数调用时实参按其位置解析，默认实参负责填补函数调用缺少的尾部实参。


## 函数匹配
> 候选函数:与被调用的函数同名，其声明在调用点可见。
> 可行函数：形参数量与本次调用提供的实参数量相等，而是每个实参的类型与对应的形参类型相同，或者能转换成形参的类型。


## 实参类型转换
> 编译器将实参类型到形参类型的转换分为几个等级。参见6.6.1节。

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

## 练习6.27
> 编写一个函数，它的参数是initializer_list<int>类型的对象，函数的功能是计算列表中所有元素的和。
> [代码参见exec6_27](exec6_27.cpp)

## 练习6.28
> 循环内的elem是什么类型?

```cpp

void error_msg(ErrCode e, initializer_list<string> il)
{
	cout << e.msg() << ":";
    for (const auto &elme: il)
    	cout << elem << " ";
    cout << endl;
}

```
> 引用类型。

## 练习6.29
> 在范围for循环中initializer_list对象时，应该将循环控制变量声明成引用类型吗？


## 练习6.30


## 练习6.31
> 返回局部变量的引用无效。
> 返回字符串常量的引用无效。

## 练习6.32
> 下面的函数合法吗？

```cpp
int &get(int *arry, int index) { return arry[index];}
int main()
{
	int ia[10];
    for (int i = 0; i != 10; ++i)
    get(ia, 1) = i;
}
```
> 合法，通过左值引用，将数组中的元素赋值。

## 练习6.33
> 编写一个递归函数，输出vector对象的内容。

```cpp
void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print(++beg, end);
	}

}


int
main(int argc, char *argv[]) 
{
	vector<int> ivec = {1, 2, 3, 4, 5};


	print(ivec.begin(), ivec.end());

	return 0;

}

```

## 练习6.34
> 如果递归循环中的factorial函数的停止条件如下，将发生什么情况?
> -如果val为负数，则递归循环不会停止。

## 练习6.35
> 为什么factorial函数传入的是val-1，而不是val--.
> 如果是val--，返回的求值是val，会陷入死循环。

## 练习6.36
> 编写一个函数声明，返回数组的引用，并且该数组包含10个string对象。

```cpp
string (&func(parameter_list))[10]
```

## 练习6.37
> 改写练习6.36，采用不同的声明。

```cpp
(1) 类型别名
typedef String arrT[10];
arrT& func(paramlist);

(2) 尾置返回类型
auto func(paramlist)->string(&)[10]

(3) 使用decltype
string arraystr[10];

decltype(arraystr) &func(paramlist)
```

## 练习6.38
> 修改arrPtr函数，使其返回数组的引用。

```cpp
int odd[] = {1, 3, 5, 7, 9};
decltype(odd) *arrPtr(int i)
{
	return (i % 2) ? &odd : &even;
}

修改为:
decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}
```

## 练习6.39
> (a) 非法，因为忽略顶层的const，重复定义了;
> (b) 非法，函数名称相同，形参列表不同。不是返回值不同。
> (c) 合法，函数重载。

## 练习6.40
> (a) 正确。
> (b) 错误，默认实参后面的形参都需要有默认值。

## 练习6.41
> (a) 错误，找不到匹配的函数
> (b) 正确，匹配ht，wd,默认实参填补函数调用缺少的尾部实参。
> (c) 正确，但是'*'是字符类型，可以转换为int类型。

## 练习6.42

```cpp

string make_plural(size_t ctr, const string& word, const string& ending = "s")
{
    return (ctr > 1) ? word + ending : word;
}

```

## 练习 6.43
>　内联函数和普通的函数声明，都可以放到头文件中。

## 练习 6.44
> 修改为内联函数。

```cpp
inline isShorter(const string &s1, const string &s2)
{
	return s1.size() < s2.size();
}

```

## 练习6.45
> 如果函数代码很少，含义非常清楚，可以定义为内联函数。


## 练习6.46
> 不能。isShorter的参数 const string &s1，不是字面值。
> constexpr函数，函数的返回类型及所有形参的类型都是字面值类型，且函数体中只有一条return语句。

## 练习6.47
```cpp
void print(vector<int>::iterator beg, vector<int>::iterator end)
{
	#ifndef NDEBUG
    	cout << end - beg << endl;
    #endif
	if (beg != end)
	{
		cout << *beg << " ";
		print(++beg, end);
	}

}
```

## 练习6.48
> 不正确，应该检测s是否为空。

## 练习6.49
> 候选函数：本地调用对应的重载函数集。
> 可行函数：从候选函数中选出能被这组实参调用的函数。


## 练习6.50
> [代码参见exec6_50](exec6_50.cpp)
>(a)二义性，编译器报错。
>(b)匹配func(int)
>(c)匹配func(int,int)
>(d)匹配func(double, double)

## 练习6.51
[代码参见exec6_50](exec6_50.cpp)


## 练习6.52
```cpp
mainip('a', 'z');	//将char类型提升为int，可以匹配
mainip(55.4, dobj);	//通过类型转换，匹配mainip(int,int)
```

## 练习6.53
```cpp
(a) 合法，参数是int类型的引用，以及int类型的常量引用
int calc(int&, int&); 
int calc(const int&, const int&); 

(b) 合法，参数是char类型的指针，以及const char类型指向常量的指针
int calc(char*, char*); 
int calc(const char*, const char*); 

(c) 不合法，形参都是char *.
```

## 练习6.54
> [代码参见exec6_64](exec6_54.cpp)

## 练习6.55
> [代码参见exec6_55](exec6_55.cpp)

`
## 练习6.56
>使用类型别名定义函数指针。

```cpp
int addint(int a, int b)
{
    return a + b;
}

int subint(int a, int b)
{
    return a - b;
}

int mulint(int a, int b)
{
    return a * b;
}

int divint(int a, int b)
{
    //TODO 
    return a / b;
}

int
main(int argc, char *argv[]) 
{

	using PF = int(*)(int, int);

	vector<PF> funv{addint, subint, mulint, divint};

	for(auto f : funv)
	{
		cout << f(1, 1) << endl;
	}
	return 0;

}
```
