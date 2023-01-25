#include <iostream>
using namespace std;

int main()
{
    const double d{5.3}; // 1.2 is an rvalue expression
    const double e{d};   // d is a non-modifiable lvalue

    int x{5};
    int y{7};

    x = y; // y is a modifiable lvalue

    int a = 6;
    a = a + 1; /* here left side a is lvalue expression and 
                right side a+1 is rvalue expression*/
    return 0;
}