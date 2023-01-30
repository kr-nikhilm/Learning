#include <bits/stdc++.h>
using namespace std;

void A()
{
    cout << "Start D\n";
    cout << "A throwing int exception\n";

    throw -1;

    cout << "End A\n"; // skipped 
}

void B()
{
    cout << "Start B\n";
    A();
    cout << "End B\n";
}

void C()
{
    cout << "Start C\n";

    try
    {
        B();
    }
    catch (double) 
    {
        cerr << "C caught double exception\n";
    }

    try
    {
    }
    catch (int)
    {
        cerr << "C caught int exception\n";
    }

    cout << "End C\n";
}

void D()
{
    cout << "Start D\n";

    try
    {
        C();
    }
    catch (int) // exception caught here and handled
    {
        cerr << "D caught int exception\n";
    }

    cout << "End D\n";
}

int main()
{
    cout << "Start main\n";

    try
    {
        D();
    }
    catch (int)
    {
        cerr << "main caught int exception\n";
    }
    cout << "End main\n";

    return 0;
}