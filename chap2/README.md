# 第二章 变量和基本类型

##类型转换：
>- 非布尔类型的算术值赋给布尔类型，初始值为0则结果为false，否则结果为true。 ** 算术值为负，转为布尔类型仍然为true **

```cpp
int
main(int argc, char *argv[]) 
{
	int a = -1;

	if (a)
	{
		printf("it is true");
	}
	else
	{
		printf("it is false");
	}

	return 0;
}
```
>-  浮点数赋给整数类型，进行了近似处理，仅保留浮点数中小数点之前的部分。
>-  把整数赋给浮点数，小数部分记为0，**如果整数部分超过了浮点数范围，精度可能损失**
>- 赋给无符号类型超出了表示的范围，结果是初始值对无符号类型表示数值总数取模后的余数。**比如：unsigned char ８个比特，如果赋值为-1，-1八比特表示为1111 1111=255,255%256=255**
>- 如果赋给带符号类型一个超出范围的值，结果是未定义(undefined)

## 含有无符号类型的表达式
>- 负数转为无符号数相当于直接给无符号数赋一个负数，结果等于这个负数加上无符号数的模。
> **无符号数的模等于2^(n).**

```cpp
	unsigned int u = 10;
	int i = -42;

	std::cout << "the sizeof int is:" << sizeof(u) << std::endl;

	std::cout <<  u + i << std::endl;
```
## 勿混用带符号和无符号类型


## 练习2.1
> int、long、short等类型的区别？无符号、有符号数的区别？float和double的区别？
>
>- 所表示的长度不同
>- 无符号数所有的比特都用来存储值
>- float、double长度不同。

## 练习2.2
> 按揭贷款，利率、本金和付款分别应该选择何种类型。
> 可以选择float或者double类型。

##　练习2.3
```cpp
	unsigned u = 10, u2 = 42;
	std::cout << u2 - u << std::endl;
	std::cout << u -u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << i2 -i << std::endl;
	std::cout << i - i2 << std::endl;
	std::cout << i -u << std::endl;
	std::cout << u - i << std::endl;
```
> 取值计算，注意 u - u2，从无符号数中减去一个值，保证结果不能是一个负值。


##　练习2.4
> 结果为：

```bash
32
4294967264  注意这个值
32
-32
0
0

```
##练习 2.5
> 字面值的区别:
（ａ） 'a'，字符，L'a'宽字符wchar_t，"a"，字符串，编译器会在尾部增加'\0'，L"a"字符串，其中的元素为宽字符。
（ｂ）10,十进制字面值，有符号数。10u，最小匹配类型unsigned ，10L，最小匹配类型为long，10uL，最小匹配类型为unsinged long，012-八进制数，0xC十六进制数。
（ｃ）3.14,浮点数字面值，3.14f浮点数类型的字面值，3.14L long double类型的浮点数。
（ｄ）10,十进制字面值，有符号数。10u，最小匹配类型unsigned，10.　浮点数字面值类型，10e-2，浮点数类型的字面值。
**浮点数字面值类型那个为double类型。**

##练习 2.6
>　定义是否有区别：
int month = 9, day = 7;
int month = 09, day = 07;
month 和 day的数据类型不同：十进制和八进制。

##练习2.7
>字面何种含义：
（ａ）通过转义,\145为八进制的数值，\012，为八进制的数值。
（ｂ）3.14e1L，long double类型的浮点数,1024f，float类型，3.14L，long double类型。

##练习2.8
> 
[代码参见exec2_8](exec2_8.cpp)


##　练习2.9
> 判断定义是否正确：

```cpp
	(1)std::cin >> int input_value;	
	(2)int i = {3.14};
	(3)double salary = wage = 9999.99;
	(4)int j = 3.14;
```
- （１）错误。>>运算符右边是变量；
- （２）错误，转换未执行；
- （３）wage未定义；
- （４）正确。

##　练习2.10
> 变量的初始化:

```cpp
	int local_int;
	std::string local_str;

	std::cout << global_str << std::endl;
	std::cout << global_int << std::endl;

	std::cout << local_int << std::endl;
	std::cout << local_str << std::endl;

```

## 练习2.11
```cpp
	(1)extern int ix = 1024;
	(2)int iy;
	(3)extern int iz;

```
- （1）定义。如果在函数体内，错误；
- （2）定义。
- （3）声明。

## 练习2.12
> 命名是否错误。

```cpp
	(1)int double = 3.14;
	(2)int _;
	(3)int catch-22;
	(4)int i_or_2 = 1;
	(5)double Double = 3.14;

```
- （1）错误，标识符不能用关键字；
- （2）正确；
- （3）错误，非字母、数字、下划线。
- （4）正确；
- （5）正确。


## 练习2.13
> j的值为多少？

```cpp
int i = 42;

int
main(int argc, char *argv[]) 
{
	int i = 100;

	int j = i;

	std::cout << j << std::endl;
	return 0;
}
```
j为100。

## 练习2.14
> 程序是否合法？输出什么？

```cpp
	int i = 100, sum = 0;
	for (int i = 0; i != 10; i++)
		sum += i;

	std::cout << i << " " << sum << std::endl;
```
输出时i为全局范围的定义，值为100，sum的和为局部范围内定义的i，从0到9求和，值为45.

## 练习2.15
引用相关定义是否合法？

```cpp
	（1）int ival = 1.01;
	（2）int &rval1 = 1.01;
	（3）int &rval2 = ival;
	（4）int &rval3;
```
-（1）正确；
-（3）错误，引用类型的初始值必须是对象；
-（3）正确；
-（4）错误，引用必须初始化。

## 练习2.16
> 赋值是否合法。

```cpp
	int i = 0, &r1 = i;
	double d = 0, &r2 = d;

	（1）r2 = 3.14159;
	（2）r2 = r1;
	（3）i = r2;
	（4）r1 = d;
```
> r1引用绑定到了i，r2引用绑定到了d；
- （1）正确，3.14159赋值给r2指向的对象i;
- （2）正确，将r1指向的对象i的值，赋给r2指向的对象d；
- （3）正确，将r2指向的对象d的值，赋给i；
- （4）正确，将d的值赋给r1指向的对象。


## 练习2.17
> 运行结果：

```cpp
	int i, &ri = i;
	i  = 5; ri= 10;
	std::cout << i << " " << ri << std::endl;
```
> 得到结果为10，10,ri作为引用，赋值10.
