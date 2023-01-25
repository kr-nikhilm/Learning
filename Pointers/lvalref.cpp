#include <iostream>
using namespace std;

int main()
{
    int x{7};
    int &ptr{x};

    cout << x << ptr << "\n";
    x = 8;
    cout << x << ptr << "\n";

    ptr = 9;
    cout << x << ptr << "\n";

    // int& invalid;  // error : references must be initialized

    const int y{5};
    int &invalidref1{5}; // can't bind to non-modificable value
    int &invalidref2{0}; // can't bind to an r-value

    double &invalidref3{x}; // reference to double can't bind to int

    const int b{5};    // b is a non-modifiable lvalue
    const int &ref{b}; // ref is a an lvalue reference to a const value, we can't modified it

    int c{7};
    const int &re{c};
    cout << re << "\n";
    re = 8; //error: can't modify through const reference
    
    c = 9;  //valid
    return 0;
}