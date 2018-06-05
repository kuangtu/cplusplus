#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>
#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::initializer_list;
using std::ostream;
using std::istream;
using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;

class PersonInfo {
    friend ifstream& read(ifstream&, PersonInfo&);
    public:
        PersonInfo() = default;
        string getName() {
            return m_name;
        }
        vector<string> getPhones() {
            return m_phones;
        }
    private:
        string m_name;
        vector<string> m_phones;
};

ifstream&
read(ifstream& ifs, PersonInfo& person)
{
    string line, word;
    //读取一行
    ifs >> line;
    istringstream record(line);
    record >> person.m_name;
    while(record >> word)
    {
        person.m_phones.push_back(word);
    }

    return ifs;
}

void
print(ostream& os, PersonInfo& info)
{
    os << info.getName();

    for (auto &i : info.getPhones())
    {
        os << i << " ";
    }

    os << endl;

}

int
main(int argc, char *argv[])
{
    std::string inputfile = "bookinfo.txt";
    ifstream input(inputfile, ifstream::in);

    PersonInfo info;
    vector<PersonInfo> persons;

    while(read(input, info))
    {
        persons.push_back(info);
    }

    for (auto &i : persons)
    {
        print(std::cout, i);
    }
    input.close();

    return 0;
}
