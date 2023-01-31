#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Base
{
    T *ptr;

public:
    Base(T *x = nullptr) : ptr{x}
    {
        cout << "In Base Constructor\n";
    }

    ~Base()
    {
        cout << "In Base Destructor\n";
        delete ptr;
    }

    T &operator*()
    {
        return *ptr;
    }
    T *operator->()
    {
        return ptr;
    }
};

class Derived
{
public:
    Derived()
    {
        cout << "In Derived Constructor\n";
    }
    ~Derived()
    {
        cout << "In Derived Destructor\n";
    }
};

int main()
{
    Base <Derived> b1{new Derived()};

    cout<<"---------------\n";
    Base <Derived> b2{b1}; //b2 in stack
    return 0;
}