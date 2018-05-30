#include <iostream>

using std::cout;
using std::endl;
using std::initializer_list;


//数组按照指针的形式传递给函数的，因此一开始函数不知道数组的确切尺寸
//调用者需要提供额外的信息
//(1)使用标记指定数组的长度，比如：C风格字符串，
void 
print(const char *s)
{
    if (s)
    {
        //不是空字符串，输出字符并向前移动
        while(*s)   
        {
            cout << *s++;
        }
    }
}
//(2)使用标准库规范
void
print(const int *beg, const int *end)
{
    //输出beg到end之间的所有元素
    while(beg != end)
    {
        cout << *beg++ << endl;
    }
}

//(3)显示传递一个数组的大小
void
print(const int ia[], size_t size)
{
    for (size_t i = 0; i != size; i++)
    {
        cout << ia[i] << endl;
    }
}


//void
//print(const int *a)
//{
//
//}

//数组引用形参
//该方法限定了数组的元素只能有10个
void
print(int (&arr)[10])
{
    for (int i = 0; i != 10; i++)
    {
        cout << arr[i] << endl;
    }
}

//error msg可变长度形参
void
err_msg(initializer_list<int> lint)
{
    for (auto beg = lint.begin(); beg != lint.end(); ++beg)
    {
        cout << *beg << endl;
    }
}


//Type (*function(parameter_list))[dimension]
//返回数组指针的函数
/*
  • func(int) says that we can call func with an int argument.
  • (*func(int)) says we can dereference the result of that call.
  • (*func(int))[10] says that dereferencing the result of a call to func yields  an array of size ten.
  • int (*func(int))[10] says the element type in that array is int.
*/

int arrayA[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int arrayB[10] = {2, 4, 6, 8, 10, 20, 40, 80, 160, 320};

int (*fun(int i))[10]
{
    return &arrayA;
}

//采用尾置返回类型
auto func1(int i)->int(*)[10]
{
    return &arrayB;
}

//使用decltype
int odd[5] =  {1, 3, 5, 7, 9};
int even[5] = {0, 2, 4, 6, 8};

decltype(odd) *arrayPtr(int i)
{
    return (i % 2) ? &odd : &even;
}

int
main(int argc, char *argv[])
{
    int a[4] = {1,2,3,4};
    int b[4];
    
    auto len = sizeof(a)/sizeof(a[0]);

    for (decltype(len) i = 0; i != len; i++)
    {
        cout << a[i] << endl;
    }
/*
Arrays have two special properties that affect how we define and use functions that
operate on arrays: We cannot copy an array
*/

//    b = a;

//将数组形参按照指针表示
//(1) void print(const int*);
//(2) void print(const int[]);
//(3) void print(const int[10]); **期望数组含有多少个元素，实际不一定

    //错误，实参不是含有10个整数的数组
    //print(a);

   //多维数组，
   //真正传递的是指向数组首元素的指针
   //void print(int (*matrix)[10], int rowsize);

//可变参数,initializer_list形参
// When we pass a sequence of values to an initializer_list parameter, we must enclose the sequence in curly braces
// 通过花括号传入参数
    cout << "initializer_list pass parameter." << endl;
    initializer_list<int> lint;
    err_msg({1, 2, 3});

//返回数组指针的函数
    int arr[10];
    int *p1[10];
    int (*p2)[10] = &arr;

    int (*arraPtr)[5] = arrayPtr(1);

    for (auto i = 0; i != 5; i++)
    {
        cout << (*arraPtr)[i] << endl;
    }


//同一作用域内函数名字相同，形参列表不同，称为重载函数。overload
//void print(const char *cp);
//void print(const int *beg, const int *end);
//void print(const int ia[], size_t size);

//顶层const不影响传入函数的对象
//int lookup(int *a);
//int lookup(const int *a);
//两者的声明是等价的

//默认实参
//typedef string::size_type sz;
//string screen(sz ht = 24, sz wid = 80, char backgrd = ' ');

//调用是可以省略
//string window;
//window = screen(); 
//window = screen(80);
//window = screen(80, 55);
//window = screen(80, 55, '#');
//默认实参负责填补函数调用缺少的尾部实参
//window = screen(, , '?');   //错误

//改变了默认实参
//sz wd = 80;
//char def = ' ';
//sz ht();
//string screen(sz = ht(), sz = wd, char = def);

//void f2()
//{
//    def = '*';
//    sz wd = 100;
//    window = screen(); //此时调用的是，screen(ht(), 80, '*');
//    //隐藏了外层定义的wd，但是没有改变默认值
//}

    return 0;
}
