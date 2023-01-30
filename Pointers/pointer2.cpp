#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x = 7;
    int *ptr = &x;
    cout << *ptr << "\n"; //print 7

    {
        int y = 9;
        ptr = &y;
        cout << *ptr << "\n"; //print 9
    }
    cout << *ptr << "\n"; //print 9  dangling pointer
    return 0;
}