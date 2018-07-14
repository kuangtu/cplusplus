#include <iostream>
#include <vector>
#include <list>
#include <memory>

using std::vector;
using std::list;
using std::cout;
using std::endl;

template <typename T> class Blob {
	public:
		typedef T value_type;
		typedef typename std::vector<T>::size_type size_type;
		Blob();
		Blob(std::initializer_list<T> il);

		size_type size() const  { return data->size(); }
	private:
		std::shared_ptr<std::vector<T>> data;

};


template <typename T>
Blob<T>::Blob(): data(std::make_shared<std::vector<T>> ()) { }

template <typename T>
Blob<T>::Blob(std::initializer_list<T> il): data(std::make_shared<std::vector<T>>(il)) { }


int
main(int argc, char *argv[]) 
{
	Blob<int> ia = {1, 2, 3, 4};

	cout << ia.size() << endl;

	return 0;
}
