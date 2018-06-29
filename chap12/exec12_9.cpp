#include <new>
#include <iostream>
#include <vector>
#include <utility>
#include <memory>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::shared_ptr;
using std::make_shared;

int
main(int argc, char *argv[])
{
    int *q = new int(42), *r = new int(100);

    //之前r分配的内存对象没有保存，造成了泄漏 
    delete r;

    //FIX
    r = nullptr;

    r = q;



    auto q2 = make_shared<int>(42), r2 = make_shared<int>(100);

    r2 = q2;

    //r2作为智能指针
    //自动释放

    return 0;
}
