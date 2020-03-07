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