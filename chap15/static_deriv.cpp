#include <iostream>
#include <string>
#include <ostream>

using std::cout;
using std::cin;
using std::endl;

//基类定义了一个静态成员，整个体系中只存在该成员的唯一定义。
class Base {
    public:
        Base() = default;
        static void statmen()
        {
            cout << "in Base statmen. " << endl;
        }

        void testbase() const
        {
            cout << "derive test." << endl;
        }
};


class Derived: public Base {
    public:
        Derived() = default;
        void f(const Derived &derived_obj);
        void test() const
        {
            cout << "derive test." << endl;
        }

};

void Derived::f(const Derived &derived_obj)
{
    Base::statmen();
    Derived::statmen();

    //通过Derived对象访问
    derived_obj.statmen();
    
    //通过this对象访问
    statmen();

}

int
main(int argc, char *argv[])
{
    Base base;
    Derived d11;

    base.testbase();
    d11.f(d11);

    return 0;
}
