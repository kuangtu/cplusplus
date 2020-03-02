# Chapter 1. 开始

## 练习1.1
> 使用编译器编译并运行main程序。

## 练习2.2
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

