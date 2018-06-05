#include <iostream>
#include <fstream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::ifstream;
using std::ofstream;

class BookInfo {
    friend ifstream& read(ifstream&, BookInfo&);
    public:
        BookInfo() = default;

        BookInfo(std::string isbn, double price, std::string author):
            m_isbn(isbn), m_price(price), m_author(author) {    }

        std::string get_isbn() {
            return m_isbn;
        }

        double get_price() {
            return m_price;
        }

        std::string get_author() {
            return m_author;
        }
    private:
        std::string m_isbn;
        double m_price;
        std::string m_author;
};

//非成员函数
ifstream& read(ifstream& ifs, BookInfo &book);


ifstream& read(ifstream& ifs, BookInfo &book)
{

    ifs >> book.m_isbn >> book.m_price >> book.m_author;

    return ifs;
}

ofstream& print(ofstream& ofs, BookInfo &book)
{

    ofs << book.get_isbn() << " " << book.get_price() << " " << book.get_author() << endl;

    return ofs;
}


int
main(int argc, char *argv[])
{
    std::string inputfile = "bookinfo.txt";
    std::string outputfile = "outbook.txt";
    BookInfo bookInfo;

    ifstream input(inputfile);
    ofstream output(outputfile);

    while(read(input, bookInfo))
    {
        print(output, bookInfo);
    }

    input.close();
    output.close();

    return 0;
}
