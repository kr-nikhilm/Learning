#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a;

    int &&c = 10;
    int x{7}; // normal variable

    int &ref{x};  // reference to an integer
    int *ptr;    //a pointer to an integer
    cout << x << "\n";
    cout << &x << "\n";

    cout << *(&x) << "\n";
    cout<<sizeof(ptr)<<"\n";
    //int* ptr2{5}; // not allowed
    return 0;
}