#include <bits/stdc++.h>
using namespace std;

int main()
{
    try
    {
        throw 10.0;
    }
    catch (int x)
    {
        cout << "Type of Exception is Double"<< "\n";
    }
    catch (...) //handler
    {
        cout << "Type of Exception is not Known"<< "\n";
    }

    return 0;
}