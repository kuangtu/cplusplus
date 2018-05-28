#include <iostream>
#include <string>

using std::string;

int
main(int argc, char *argv[])
{
    unsigned int cnt = 10;
    constexpr unsigned int sz = 15;
    int arrbad[cnt];    //cnt is not a constant expression
    string strs[sz];
    
    char a3[] = "C++";  //null terminator added automatically
    int a[] = {0, 1, 2};
    int a2[] = a;   //error: can't initialize one array with another

    //pointers and arrays
    //obtain a pointer to object by using &
    string nums[] = {"one", "two", "three"};
    string *p = &num[0];    //p points to first element in nums
    string *p2 = nums;      //equivalent to p2=&num[0]

    //multideimensional array
    int arr[10][20][30] = {0};  //initialize all elements to 0
    //explicitly initialize only element 0 in each row
    int ia[3][4] = {{0}, {4}, {8}};

    //explicitly initialize row 0, the remaining elements are value initialized
    int ix[3][4] = {0, 3, 6, 9};


}
