#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::string;
using std::ifstream;
using std::istringstream;
using std::multiset;
using std::vector;

class Book {
    public:
        Book() = default;
        Book(string isbn, string name): m_isbn(isbn), m_name(name) {

        }
        string getIsbn() {
            return m_isbn;
        }

        string getName() {
            return m_name;
        }
    private:
        string m_isbn;
        string m_name;
};

bool
cmpIsbn(Book &book1 , Book &book2)
{
    return book1.getIsbn() < book2.getIsbn();
}

int
main(int argc, char *argv[])
{
    multiset<Book, decltype(cmpIsbn)*> bookstore(cmpIsbn);

    Book b1("isbn1", "mo");
    Book b2("isbn2", "mo"); 

    //TODO FIX
    //bookstore.insert(b1);

    return 0;
}
