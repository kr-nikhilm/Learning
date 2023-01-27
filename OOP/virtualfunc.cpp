#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    virtual string getName()
    {
        return "Base";
    }
};

class Derived : public Base
{
public:
    virtual string getName()
    {
        return "Derived";
    }
};

int main()
{
    Derived derived;
    Base &base{derived};
    cout << base.getName() << "\n";
    return 0;
}