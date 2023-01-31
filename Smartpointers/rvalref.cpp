#include <bits/stdc++.h>
using namespace std;

void print(int &x)
{
    cout << "L-value reference\n";
}
void print(int &&y)
{
    cout << "R-value reference\n";
}

int main()
{
    int &&ref = 5;
    // cout << ref << "\n";

    ref = 10;
    // cout << ref << "\n";

    int x = 7;
    print(x); //calls lvalue function
    print(7); // calls rvalue function
    print(ref); //calls lvalue because for this funcion ref is lvalue
    return 0;
}