#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::cin;
using std::endl;
using std::map;
using std::string;

int
main(int argc, char *argv[]) 
{
	map<string, size_t> word_count;
	string word;

	while(cin >> word)
	{
		++word_count[word];
	}

	for (const auto &s : word_count)
	{
		cout << s.first << " occurs " << s.second
			<< ((s.second > 1) ? "times" : "time") << endl;
	}

	return 0;
}
