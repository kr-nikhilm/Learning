#include <iostream>
using namespace std;

template <typename A, typename B>
A max(A x, B y)
{
    return (x > y) ? x : y;
}

int main()
{
    cout << max(10, 13.3) << '\n';
    cout << max(20, 15.8) << "\n";
    return 0;
}