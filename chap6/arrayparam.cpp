#include <iostream>

using std::cout;
using std::endl;


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

    return 0;
}
