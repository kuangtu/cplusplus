# Chapter 1. 开始

## 练习1.1
> 使用编译器编译并运行main程序。

## 练习1.2
> 将main程序中的返回值改为-1，检查main返回之后的错误标识。

```cpp
int
main(int argc, char *argv[]) 
{
	return -1;
}

```
>运行之后通过命令:

```bash
echo $?
```
>查看返回状态为255.可以参照这个页面的[说明](http://www.tldp.org/LDP/abs/html/exitcodes.html).

## 练习1.3
>标准输出上打印hello world.

```cpp
#include <iostream>

int
main(int argc, char *argv[]) 
{
	std::cout << "hello world" << std::endl;

	return 0;
}
```
## 练习1.4
>乘法运算符号计算和并打印。
>
> [代码参见exec1_4.cpp](exec1_4.cpp)

## 练习1.5
>在每行打印运算对象。

```cpp
#include <iostream>

int
main(int argc, char *argv[]) 
{

	std::cout << "Enter two number:" << std::endl;
	int v1 = 0, v2 = 0;
	std::cin >> v1 >> v2;
	std::cout << "The mul of ";
	std::cout << v1;
	std::cout << " and ";
	std::cout << v2;
	std::cout << " is ";
	std::cout << v1 * v2;
	std::cout << std::endl;

	return 0;

}
```

## 练习1.6
>运算符号"<<" 左侧少了std::cout运算对象。

```bash
test.cpp:11:9: error: expected primary-expression before ‘<<’ token
         << " and " << v2;
```

> 删除语句尾部的分号。

## 练习1.7
> 编译一个包含有错误注释的程序，观察编译器返回的错误信息。

```cpp
	/*
	 * 嵌套注释 /* */
	 *
	 */
	int v1 = 2, v2 = 3;
	v1 = v1 + v2;
	std::cout << v1 << std::endl;
```

>编译器错误为：

```bash
test.cpp:15:18: warning: "/*" within comment [-Wcomment]
   * 嵌套注释 /* */
                  ^
test.cpp: In function ‘int main(int, char**)’:
test.cpp:17:4: error: expected primary-expression before ‘/’ token
   */
```
## 练习1.8
> 如下注释那条语句是正确的：

```cpp
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /*  "*/" */;
	std::cout << /* "*/" /* "/*" */;
```

> 其中，第三条有错误：增加引号

```cpp
std::cout << /*  "*/" */";
```

##　练习1.9
> 将50到100的数字相加。
> 
>[代码参见exec1_9](exec1_9.cpp)

## 练习1.10
打印10到0之间的数字。
[代码参见exec1_10](exec1_10.cpp)

## 练习1.11
输入两个整数，打印这两个整数之间的所有整数。
[代码参见exec1_11](exec1_11.cpp)

## 练习1.12
如下代码的功能和结果.
```cpp
int sum = 0;
for (int i = -100; i <= 100; ++i)
    sum += i;
```
将-100到100之间的数目相加，结果为0.

## 练习1.13
通过for语句重新编写练习1.9、１.10、1.11、1.12.

### 1.9
```cpp
	int sum = 0;
	for (int val = 50; val <= 100; val++)
	{
		sum += val;
	}

	std::cout << "Sum of 50 to 100 inclusive is "
				<< sum << std::endl;
```

### 1.10
```cpp
	for (int val = 10; val >= 0; val--)
	{
		std::cout << val << " ";
	}
	std::cout << std::endl;
```
### 1.11
```cpp
	int v1, v2, a, b;

	std::cout << "Please input two number." << std::endl;
	std::cin >> v1 >> v2;

	//判断大小
	if (v1 <= v2)
	{
		a = v1;
		b = v2;
	}
	else
	{
		a = v2;
		b = v1;
	}

	for (int i = a; i <= b; ++i)
	{
		
		std::cout << a << " ";
		++a;
	}

	std::cout << std::endl;
```

##练习1.14
> 比较for和while的优缺点：
>
>（１）while语句仅包含条件语句，使用方便和直观；
>
>（２）for语句

##练习1.15
> 编译类型错误，编写多了就见得多了。^_^

##练习1.16 
> 从 cin读取一组数，输出其和。
> 
> [代码参见exec1_16](exec1_16.cpp)

##练习1.17
如下程序输入所有相等的值、没有重复值，输出结果是什么？
```cpp
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
```

>所有值相等，结果是该值的数目。
>
>所有值不同，输入回车之后会打印各数字的频次。

##1.18
>编译和运行本节程序，输入不同的值以及输入相同的值。
>
>**需要注意的时候，停止输入之后，会打印最后的一个数字所出现的频次。**
>
>[代码参见exec1_17](exec1_17.cpp)

>运行结果：

```cpp
moxuansheng@kuangtu:/mnt/home2/dev-workspace/github/cplusplus/chap1$ ./exec1_17.exe 
1 2 3 4
1occurs 1 times
2occurs 1 times
3occurs 1 times
4occurs 1 times
moxuansheng@kuangtu:/mnt/home2/dev-workspace/github/cplusplus/chap1$ ./exec1_17.exe 
1 1 1 1
1occurs 4 times
```

## 练习1.19
[代码参见exec1_11](exec1_11.cpp)

## 练习1.20
> 一组销售记录，将每条记录打印到标准输出上。
>
[代码参见exec1_20](exec1_20.cpp)

## 练习1.21
>取两个ISBN相同的对象，输出他们的和。
>
[代码参见exec1_21](exec1_21.cpp)

## 练习1.22
>读取多个具有相同ISBN的销售记录，输出所有记录的和。
>
[代码参见exec1_22](exec1_22.cpp)

## 练习1.23
>读取多条销售记录，并统计每个ISBN（每本书）有几条销售记录。
>
[代码参见exec1_23](exec1_23.cpp)

## 练习1.24
> 通过文件重定向读取销售记录。
```bash
moxuansheng@kuangtu:/mnt/home2/dev-workspace/github/cplusplus/chap1$ cat salesbook.txt 
isbn-1 1 22
isbn-1 2 45
isbn-2 2 3
isbn-2 3 1
isbn-3 3 2
isbn-4 2 1
isbn-4 22 1
moxuansheng@kuangtu:/mnt/home2/dev-workspace/github/cplusplus/chap1$ ./exec1_23.exe < salesbook.txt 
isbn-1count is 2
isbn-2count is 2
isbn-3count is 1
isbn-4count is 2
moxuansheng@kuangtu:/mnt/home2/dev-workspace/github/cplusplus/chap1$ 
```

## 练习1.25
[代码参见exec1_25](exec1_24.cpp)