#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <sstream>
#include <set>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::set;
using std::string;
using std::ifstream;
using std::istringstream;

int
main(int argc, char *argv[])
{
    ifstream input("text.txt");
    string s;
    map<string, size_t> words_count;
	set<string> exclude = {"The", "this", "that", "and", "or", "the"}; 

    if (!input.is_open())
    {
        cout << "open file failed." << endl;
        
        return 0;
    }

    while(std::getline(input, s))
    {
        string word;

        cout << s << endl;

        istringstream line(s);

        while(line >> word)
        {
            cout << word << " ";
            if (exclude.find(word) == exclude.end())
            {
                ++words_count[word];
            }
        }

        cout << endl;
    }

    input.close();

    for (const auto &w : words_count)
    {
        cout << w.first << " occurs " << w.second
			<< ((w.second > 1) ? "times" : "time") << endl;
    }

    return 0;
}
