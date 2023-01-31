#include <bits/stdc++.h>
using namespace std;

template <typename T>
class A
{
    T *ptr;

public:
    A(T *x = nullptr) : ptr{x}
    {
        cout<<"In Constructor\n";
    }

    ~A()
    {
        cout<<"In Destructor\n";
        delete ptr;
    }

    T& operator*(){
        return *ptr;
    }
    T* operator->(){
        return ptr;
    }
};

int main()
{

    A<int> a{new int()};

    return 0;
}