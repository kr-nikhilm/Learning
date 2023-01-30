#include <iostream>
using namespace std;

int main()
{
    int value{5};

    int *ptr0{&value};
    const int *ptr1{&value};
    int *const ptr2{&value};
    const int *const ptr3{&value};

    int y = 9;

    //*ptr1=17;  //error: can't change value
    ptr1 = &y;

    *ptr2 = 11;
    // ptr2 = &y; can't change pointer

    int a = 10;
    int &b = a;

    int &&c = 10;
    cout << c << "\n";
    int x{7}; // normal variable

    int &ref{x}; // reference to an integer
    int *ptr;    // a pointer to an integer
    cout << x << "\n";
    cout << &x << "\n";

    cout << *(&x) << "\n";
    cout << sizeof(ptr) << "\n";
    // int* ptr2{5}; // not allowed
    return 0;
}