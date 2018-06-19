#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::vector;
using std::istream;
using std::ostream;
using std::cout;
using std::cin;
using std::endl;
using std::find;
using std::count;
using std::accumulate;
using std::unique;
using std::sort;
using std::string;
using std::stable_sort;

class Book {
    friend ostream& print(Book&, ostream&);
    friend istream& get(Book&, istream&);
    friend bool compareIsbn(const Book&, const Book&);

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

istream&
get(Book& book, istream &is)
{
    is >> book.m_isbn >> book.m_author;

    return is;
}

bool
compareIsbn(const Book& b1, const Book& b2)
{
    //基于std::string 进行比较
    return b1.m_isbn < b2.m_isbn;
}

int
main(int argc, char *argv[])
{
    vector<Book> books;

    books.emplace_back("isbn-001", "mo");
    books.emplace_back("isbn-211", "mo");
    books.emplace_back("isbn-112", "mo");
    books.emplace_back("isbn-111", "mo");

    stable_sort(books.begin(), books.end(), compareIsbn);

    for (auto &s : books)
    {
        print(s, std::cout);
    }

    return 0;
}
