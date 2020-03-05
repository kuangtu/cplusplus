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
运行之后通过命令:
```bash
echo $?
```
查看返回状态为255.可以参照这个页面的[说明](http://www.tldp.org/LDP/abs/html/exitcodes.html).

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
乘法运算符号计算和并打印。
[代码参见exec1_4.cpp](exec1_4.cpp)

## 练习1.5
在每行打印运算对象。
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
运算符号"<<" 左侧少了std::cout运算对象。
```bash
test.cpp:11:9: error: expected primary-expression before ‘<<’ token
         << " and " << v2;
```

删除语句尾部的分号。

## 练习1.7
编译一个包含有错误注释的程序，观察编译器返回的错误信息。
```cpp
	/*
	 * 嵌套注释 /* */
	 *
	 */
	int v1 = 2, v2 = 3;
	v1 = v1 + v2;
	std::cout << v1 << std::endl;
```
编译器错误为：
```bash
test.cpp:15:18: warning: "/*" within comment [-Wcomment]
   * 嵌套注释 /* */
                  ^
test.cpp: In function ‘int main(int, char**)’:
test.cpp:17:4: error: expected primary-expression before ‘/’ token
   */
```
## 练习1.8
如下注释那条语句是正确的：
```cpp
	std::cout << "/*";
	std::cout << "*/";
	std::cout << /*  "*/" */;
	std::cout << /* "*/" /* "/*" */;
```

其中，第三条有错误：增加引号
```cpp
std::cout << /*  "*/" */";
```

##　练习1.9
将50到100的数字相加。
[代码参见exec1_9](exec1_9.cpp)