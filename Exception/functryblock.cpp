#include <bits/stdc++.h>
using namespace std;

class A
{
private:
    int x;

public:
    A(int val)
    try : x{val}
    {
        if (x<0)
            throw 5;
    }
    catch (...)
    {
        cerr << "Exception Caught\n";
    }
};

int main()
{
    try
    {
        A a{-5};
    }
    catch (int)
    {
        cout << "Error\n";
    }
    return 0;
}
