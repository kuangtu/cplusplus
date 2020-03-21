# 第五章 语句

## 练习5.1
> 包含一个单独分号的语句

## 练习5.2
> 用花括号括起来的语句和声明的序列称为块，块不以分号作为结束。
> 逻辑中需要使用多条语句，通过块。

##练习5.3
> 通过逗号运算符重写while语句。

```cpp
	while(sum += val, ++val, val <= 10)
		;
```
> 此时需要注意逗号运算符，对于左侧的表达式求值，然后将求值结果丢弃，真正结果是右侧表达式的值。**如下的语句是错误的**
```cpp
	while(val <= 10, sum += val , ++val)
		;
    编译器提示："relational comparison result unused
```
>　可读性降低了，通过块的方式更为方便。

## 练习5.4
>　说明下列例子的含义，如果存在问题，进行修改。

```cpp
while(string::iterator iter != s.end()) {/* */}

while语句中定义的变量没有初始化。

string::iterator iter = s.begin();
while(iter != s.end()) {/* */}

while(bool status = find(word)) {/* */}
if (!status) {/* */}

while语句中定义的变量作用域限制在语句块内。

bool status= false;
while(status = find(word)) {/* */}
if (!status) {/* */}

```

##　练习5.5
> 通过if/else语句实现把数字成绩转为字母成绩的要求。

```cpp
	const vector<string> scores = {"F", "D", "C" , "B", "A", "A++"};
	int grade = 100;

	string lettergrade;
	if (grade < 60)
		lettergrade = scores[0];
	else
		lettergrade = scores[(grade - 50) / 10];

	cout << lettergrade << endl;

```


## 练习5.6
> 通过条件运算符改写练习5.5.
> [代码参见exec5_6]{exec5_6.cpp}

## 练习5.7
> 修改如下代码中的错误。

```cpp

(a) if (ival1 != ival2) ival1 = ival2
    else ival1 = ival2 = 0;
(b) if (ival < minval) minval = ival;
    occurs = 1;
(c) if (int ival = get_value())
    cout << "ival = " << ival << endl;
    if (!ival)
    cout << "ival = 0\n";
(d) if (ival = 0)
    ival = get_value();

```
>修改如下：

```cpp
(a) if (ival1 != ival2) ival1 = ival2;
    else ival1 = ival2 = 0;
(b) if (ival < minval)
	{	minval = ival; occurs = 1;}
(c) int ival;
	if (ival = get_value())
    cout << "ival = " << ival << endl;
    if (!ival)
    cout << "ival = 0\n";
(d) if (ival == 0)
    ival = get_value();
    
```
## 练习5.8
> 什么是悬垂else？C++如何处理else子句？
> if分支中包含了多个else分支，else分支数量匹配的情形，称为"悬垂"else;
> else与离它最近的尚未匹配的if匹配。


## 练习5.9
> 通过if语句统计从cin读入的文本中有多少元音字母？
> [参见代码exec5_9](exec5_9.cpp)


## 练习5.10
> 修改代码，在统计元音字母时，对于大小写形式都进行统计。
> [参见代码exec5_10](exec5_10.cpp)

## 练习5.11
> 修改统计元音字母的程序，也能统计空格、制表符和换行符的数量。
> [代码参见exec5_11](exec5_11.cpp)

## 练习5.12
> 修改统计元音字母的程序，能够统计以下含有两个字符的字符序列的数量：ff、fl和fi.
> [代码参见exec5_12](exec5_12.cpp)

## 练习5.13
> 修改如下代码中的常见错误。

```cpp
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++;
        case 'e': eCnt++;
        default: iouCnt++;
    }
(b) unsigned index = some_value();
    switch (index) {
        case 1:
            int ix = get_value();
            ivec[ ix ] = index;
            break;
        default:
            ix = ivec.size()-1;
            ivec[ ix ] = index;
    }
(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
        case 1, 3, 5, 7, 9:
            oddcnt++;
            break;
        case 2, 4, 6, 8, 10:
            evencnt++;
            break;
    }
(d) unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }

```
修改如下：
```cpp
(a) unsigned aCnt = 0, eCnt = 0, iouCnt = 0;
    char ch = next_text();
    switch (ch) {
        case 'a': aCnt++;break;
        case 'e': eCnt++;break;	//不增加break，每次都会执行default
        default: iouCnt++;
    }
(b) unsigned index = some_value();
	int ix = 0;
    switch (index) {
        case 1:
            ix = get_value();		//定义在外部
            ivec[ ix ] = index;
            break;
        default:
            ix = ivec.size()-1;
            ivec[ ix ] = index;
    }
(c) unsigned evenCnt = 0, oddCnt = 0;
    int digit = get_num() % 10;
    switch (digit) {
    	//多种清空，应该是多个case
        case 1, case 3, case 5, case 7, case 9:
            oddcnt++;
            break;
        case 2, case 4, case 6, case 8, case 10:
            evencnt++;
            break;
    }
(d) case 标签是整型常量表达式
constexpr unsigned ival=512, jval=1024, kval=4096;
    unsigned bufsize;
    unsigned swt = get_bufCnt();
    switch(swt) {
        case ival:
            bufsize = ival * sizeof(int);
            break;
        case jval:
            bufsize = jval * sizeof(int);
            break;
        case kval:
            bufsize = kval * sizeof(int);
            break;
    }
    
```
## 练习5.14
> 编写程序统计连续重复出现的单词。
> [代码参见exec5_14](exec5_14.cpp)

## 练习5.15
> 说明下列循环的含义并改正错误。

```cpp
(a) for (int ix = 0; ix != sz; ++ix) { /* ... */ }
    if (ix != sz)
    // . . .
(b) int ix;
    for (ix != sz; ++ix) { /* ... */ }
(c) for (int ix = 0; ix != sz; ++ix, ++sz) { /*...*/ }

```
>修改代码如下：

```cpp
	int ix = 0;	//for循环中定义变量，作用在for块中
(a) for (ix = 0; ix != sz; ++ix) { /* ... */ }
    if (ix != sz)
    // . . .
(b) int ix; for语句格式
    for (;ix != sz; ++ix) { /* ... */ }
    //ix和sz同时增加，
(c) for (int ix = 0; ix != sz; ++ix) { /*...*/ }

```

## 练习5.16
> for和while更倾向于while。仅做条件判断，条件的修改和执行均在块语句中。


## 练习5.17
> 两个vector对象，检查其中一个是否是另外一个的前缀。
> [代码参见exec5_17](exec5_17.cpp)

## 练习 5.18
> 说明下列循环的含义，并改正其中的错误。

```cpp
//增加{}
(a) do { 
G        int v1, v2;
        cout << "Please enter two numbers to sum:" ;
        if (cin >> v1 >> v2)
            cout << "Sum is: " << v1 + v2 << endl;
    }while (cin);
//变量声明放在了while条件部分 
(b) int ival;
    do {
        // . . .
    } while (ival = get_response()); 
//变量声明放在了do部分，while条件部分不再范围之内
(c) int ival = get_response();
    do {
        ival = get_response();
    } while (ival); 
```

## 练习5.19
> do while语句执行下述任务：提示用户输入两个string对象，然后挑出较短的那个并输出。
> [代码参见exec5_19](exec5_19.cpp)

## 练习5.20
> 编写程序，从标准输入中读取string对象的序列直到连续出现两个相同的单词，或者所有单词都读完为止。
> [代码参见exec5_20](exec5_20.cpp)

## 练习5.21
> 修改练习5.20，找到的重复单词必须以大写开头。
> [代码参见exec5_21](exec5_21.cpp)

## 练习5.22
> 改写程序，不使用goto语句。

```cpp
	int sz;
	
	while((sz = getsize()) < 0)
	{

	}

```

## 练习5.23
> 编写程序，从标准输入读取两个整数，输出第一个除以第二个数的结果。
> [代码参见exec5_23](exec5_23.cpp)

## 练习5.24
> 修改练习5.23，当第二个数为0时抛出异常。
> [代码参见exec5_24](exec5_24.cpp)

## 练习5.25
> 修改练习5.25，通过try-catch语法捕获异常。
> [代码参见exec5_25](exec5_25.cpp)