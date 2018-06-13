#include <iostream>
#include <fstream>
#include <vector>
#include <cstdbool>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;

class Book {
    friend ostream& print(Book&, ostream&);
    public:
        Book() = default;
        Book(string isbn, string author): m_isbn(isbn), m_author(author) { }

    private:
        string m_isbn;
        string m_author;
};


ostream&
print(Book& book, ostream &os)
{
    os << book.m_isbn << " " << book.m_author << endl;
    return os;
}


int
main(int argc, char *argv[])
{
    vector<Book> b;
    b.emplace_back("isbn001", "mo");

    auto begin = b.begin();
    auto end = b.end();

    while(begin != end)
    {
        print(*begin, std::cout);
        ++begin;
    }



    return 0;
}
