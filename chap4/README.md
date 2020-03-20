# 第四章 表达式

## 左值和右值
> [参见这篇文章](https://eli.thegreenplace.net/2011/12/15/understanding-lvalues-and-rvalues-in-c-and-c/)

## 算数运算
> 对于除法，C++新标准规定商一律向0取整
> 对于模预算，如果m%n不为0，则他的符号和m相同。
> m%(-n)等于m%n、(-m)%n等于-(m%n)


```cpp
	int m = -20;
	int n = -6;
	cout << m%n << endl;	//-2

	n = 6;
	cout << m%n << endl;	//-2

	m = 21;
	n = -5;
	cout << m%n << endl;  //1

```


##赋值运算
> 右结合律
> 对于多重赋值语句中的每个对象，他的类型或者与右边的类型相同，或者可以由右边对象的类型转化得到

```cpp
int ival, *pval;
ival = pval = 0; 	//不能把指针的值赋给int 
```

## 递增和递减运算
> 前置版本和后置版本
> 后置版本：将预算对象加1，但求值结果是运算对象改变之前的那个值的副本


## 移位运算
> 左移运算符<<在右侧插入值为０的二进制，右移运算符>>的**行为依赖左侧运算对象的类型:**
> -　如果运算对象是无符号类型，在左侧插入值为0的二进制位
> -　如果是带符号类型，在左侧插入符号位的副本或值为0的二进制位

## 练习4.1
> 表达式 5+10*20/2的结果是？
> 105

## 练习4.2
> 添加括号，运算顺序和之前的一致。
> *vec.begin()  --> *(vec.begin()), "."成员选择优先级高于解引用
> *vec.begin() + 1 --> *(vec.begin()) + 1

## 练习4.3
> C++没有明确规定二元运算的求值顺序，给编译器优化留下了余地。是否认可？
> 认可。对于二元运算通过“建议”（在表达式的其他地方不要再使用这个运算对象）。

## 练习4.4
>  向表达式添加括号，说明求值过程即最终结果。等于91.

```cpp
	int a = 0;
	a = 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2;
	cout << a << endl;

	//取模运算优先级低于乘法和除法
	a = (12 / 3) * 4  + (5 * 15) + (24 % (4 / 2));
	cout << a << endl;
```

## 练习4.5
> 下列表达式的求值结果：

```cpp
	a = -30 * 3 + 21 / 5;
	cout << a << endl;		//-86

	a = -30 + 3 * 21 / 5;
	cout << a << endl;		//-18

	a = 30 / 3 * 21 % 5;
	cout << a << endl;		//0

	a = -30 / 3 * 21 % 4;	//-m % n  = -(m%n)
	cout << a << endl;		//-2

```

## 练习4.6
> 写表达式确定一个整数是基数还是偶数。

```cpp
(i % 2) == 0 ? "it's eve" : "odd" 
```

## 练习4.7
>溢出是什么含义？
> - 数学性质，比如除数为0；
> - 计算机的特点：计算的结果超过了该类型能够表达的范围。

```cpp
int a = 10 / 0;

short value = 65535; ++value;
unsigned short a = 0; --a;
```

## 练习4.8
> 逻辑与和逻辑或运算符都是先求左侧运算对象再求右侧运算对象的值。
> 相等性运算符无规定求值的优先顺序。

## 练习4.9
>解释if条件的判断过程：

```cpp
const char *cp = "hello world";
if (cp && *cp)
```
> 逻辑与操作，先判断左值是否为true，如果为真，在判断字符串不为空值。

## 练习4.10
> 为while循环写一个条件，读取整数遇到42时停止。
> [代码参见exec4_10](exec4_10.cpp)

## 练习4.11
> 书写一条表达式用于测试4个值a、b、c、d的关系，确保a大于b、b大于c、c大于d。

```cpp
a > b && b > c && c > d
```

## 练习4.12
> 说明表达式i!=j<k的含义。
> 优先级 < 大于 !=，即：i!=(j < k) ,将i 与布尔类型的true或者false进行比较
> 不是布尔型，将布尔型转为i整数类型,判断，i是否为1或者0.

## 练习4.13
> 赋值完成后i和d的值分别是多少？

```cpp
int i; double d;
(1) d = i = 3.5; 	i = 3; d = 3.0
(2) i = d = 3.5;	i = 3; d = 3.5
```
> 赋值语句右结合律

## 练习4.14
> 执行下列语句之后发生什么.

```cpp
if ( 42 = i )	//错误，字面常量不是左值
if ( i = 42)	//i等于42， if结果一直为true
```

## 练习4.15
> 下列赋值如何修改？

```cpp
double dval; int ival; int *pi;
dval = ival = pi = 0;

//修改为
dval = ival = 0;
pi = 0;
```
> 不能将指针的值赋给int

## 练习4.16
> 说明如下的逻辑：

```cpp
if (p = getPtr() != 0)
修改为：
if ((p = getPtr()) != 0)

if (i = 1024)
修改为：
if (i == 1024)
```
> != 的优先级高于赋值=


## 练习 4.17
> 说明前置运算符和后置运算符的区别。
> 后置版本：将预算对象加1，但求值结果是运算对象改变之前的那个值的副本

## 练习 4.18
>如果使用前置运算会有什么问题？

```cpp
	vector<int> v;

	auto pbeg = v.begin();
	while(pbeg != v.end() && *beg >= 0)
	{
		cout << *pbeg++ << endl;
	}
```
> 第一个元素无法输出
> 并且解引用了v.end，未定义。

## 练习4.19
> 说明表达式何种含义？

```cpp
ptr != 0 && *ptr++		//正确，ptr遍历int指针

ival++ && ival			//

vec[ival++] <= vec[ival] 

```

## 练习4.21
> 使用条件运算符从vector<int>中找到哪些元素的值是奇数，然后将这些奇数值翻倍。

```cpp


```

## 练习4.22
> 通过条件语句划分成绩。

```cpp
	int grade = 75;

	string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";

	cout << finalgrade << endl;

	finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : (grade >= 60 && grade <=75) ? "low pass" : "pass";

	cout << finalgrade << endl;

```

## 练习4.23
> 修改优先级。

```cpp
	string s= "word";
	string p1 = s + s[s.size() - 1] == 's' ? "" : "s";
	string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
```
> 条件运算符的优先级低于+，判断s.size() - 1 字符串最后一个字符是否为's'，如果是，保持不变，如果不是，连接字符串"s"。

## 练习4.24
> 对于类似4.22中成绩划分的题目，如果条件运算符满足的是左结合律，求值过程如何？

```cpp
	string finalgrade = (grade > 90) ? "high pass" : (grade < 60) ? "fail" : "pass";
```
> 满足左结合律，则如果grade小于等于90，则执行expr2，即：(grade < 60)得到布尔变量，再根据布尔变量的值执行后续的expr1和expr2。



## 练习4.28
> 编写一段程序，输出每一种内置类型所占空间的大小。
> [代码参见exec4_28](exec4_28.cpp)

## 练习4.29
> 推断下面代码的输出结果并说明理由。
```cpp
int x[10]; int *p = x;
cout << sizeof(x)/sizeof(*x) << endl;
cout << sizeof(p)/sizeof(*p) << endl;
```
> - 第一个表达式计算数组x中元素的数目
> - 第二个表达式存在问题，用指针的大小/指针指向元素的大小。

## 练习4.30
> 表达式加上适当的括号，与原来含义相同
> - sizeof运算符的优先级大于"+"

```cpp
sizeof x + y --> sizeof(x) + y
sizeof p->mem[i] --> sizeof(p->mem[i])
sizeof a < b --> sizeof(b) < b
sizeof f() --> sizeof(f())
```



## 练习4.31
> 为什么时候前置的递增运算符，而不是后置的递增运算符。

```cpp
vector<tint>::size_type cnt = ivec.size();

for (vector<int>::size_type ix = 0; ix != ivec.size(); ++ix, --cnt)
	ivec[ix] = cnt;

```
