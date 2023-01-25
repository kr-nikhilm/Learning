#include <iostream>
using namespace std;

int main()
{
    int x{5};
    int y{6};

    const int *ptr{&x}; // pointing to const int

    int *const ptr2{&x};
    ptr = &y; // error: a const pointer can't be changed.


    const int* const ptr3{&y}; //const pointer to const value
    return 0;
}