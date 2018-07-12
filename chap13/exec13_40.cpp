#include <memory>
#include <iostream>
#include <string>
#include <utility>
#include <list>
#include <set>
#include <vector>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>
#include <utility>
#include <list>
#include <memory>
#include <stdexcept>
#include <utility>

using std::string;
using std::cout;
using std::endl;
using std::allocator;
using std::pair;
using std::initializer_list;

//通常使用std::move，而不是move
//using std::move;

//

class StrVec {
	public:
		StrVec(): elements(nullptr), first_free(nullptr), cap(nullptr) {}
        StrVec(initializer_list<string> lst);
        StrVec(const StrVec&);
        StrVec& operator=(const StrVec&);
        ~StrVec();
        void push_back(const string&);
        //当前数目
        size_t size() const { return first_free - elements; }
        //可以保存的数目
        size_t capacity() const {return cap - elements; }
        string *begin() const { return elements; }
        string *end() const {return first_free; }

    private:
        allocator<string> alloc;
        //添加时检查
        void chk_n_alloc()
        {
            if (size() == capacity())
                {
                    reallocate();
                }
        }
        pair<string*, string*> alloc_n_copy(const string*, const string*);
        void free();
        void reallocate();
        string *elements;
        string *first_free;
        string *cap;    //指向数组尾后位置的指针

};

StrVec::StrVec(initializer_list<string> lst)
{
    for (auto beg = lst.begin(); beg != lst.end(); ++beg)
    {
        push_back(*beg);
    }
}

void StrVec::push_back(const string &s)
{
    chk_n_alloc();

    //first_free指向的元素中构造s的副本 
    alloc.construct(first_free++, s);
}

pair<string*, string*>
StrVec::alloc_n_copy(const string *b, const string *e)
{
    auto data = alloc.allocate(e - b);

    //uninitialized_copy的返回值是一个指针，指向最后一个构造元素之后的位置
    return {data, uninitialized_copy(b, e, data) };
}

void StrVec::free()
{
    if (elements)
    {
       for (auto p = first_free; p != elements; )
       {
           alloc.destroy(--p);
       }

       alloc.deallocate(elements, cap - elements);
    }
}

StrVec::StrVec(const StrVec &s)
{
    auto newdata = alloc_n_copy(s.begin(), s.end());

    elements = newdata.first;

    first_free = newdata.second;
}

StrVec::~StrVec() {
    free();
}

StrVec& StrVec::operator=(const StrVec &rhs)
{
    auto data = alloc_n_copy(rhs.begin(), rhs.end());
    free();

    elements = data.first;
    first_free = data.second;

    return *this;
}

void StrVec::reallocate()
{
    auto newcapacity = size() ? 2 * size() : 1;

    auto newdata = alloc.allocate(newcapacity);

    auto dest = newdata;

    auto elem = elements;

    for (size_t i = 0; i != size(); i++)
    {
        alloc.construct(dest++, std::move(*elem++));
    }

    free();

    //更新数据结构 
    elements = newdata;
    first_free = dest;

    cap = elements + newcapacity;
}


int
main(int argc, char *argv[])
{

    return 0;
}
