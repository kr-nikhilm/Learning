#include <iostream>
using namespace std;

int main()
{
    int x = 15;
    cout << (x << 1) << "\n"; // x<<y shift x left by y bits
    cout << "x is " << x << "\n";
    cout << (x <<= 1) << "\n"; // x<<=y shift x left by y bits and assign to x
    cout << "x is " << x << "\n";
    return 0;
}