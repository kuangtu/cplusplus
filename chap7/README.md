# 类

## 成员函数
>  成员函数必须在类的内部声明，但是成员函数体可以定义在类内也可以定义在类外。

## 练习7.2
>添加combine和isbn成员。
>

## 练习7.3


## 练习7.4
> 编写Person类，使其表示人员的姓名和住址。

```cpp
struct Person {

    std::string name;
    std::string addr;

};

```

## 练习7.5
> Person类中添加操作，使其能够返回姓名和住址。

```cpp
struct Person {
    std::string getName() const { return name; };
    std::string getAddr() const { return addr; }; 

    std::string name;
    std::string addr;

};

```
>可以是const。

