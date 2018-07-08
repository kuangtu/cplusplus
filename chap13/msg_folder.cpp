#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Folder;

class Message {
	friend class Folder;

	public:
		Message(const string &str= ""): contents(str) { }
		Message(const Message&);
		Message& operator=(const Message&);
		~Message();
	private:
		string contents;
		void save(Folder&);
		void remove(Folder&);
};

int
main(int argc, char *argv[]) 
{

	return 0;
}
