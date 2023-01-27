#include <bits/stdc++.h>
using namespace std;

class Base
{
private:
    int m_value;

public:
    Base(int value)
        : m_value{value}
    {
    }
    void identify() const { std::cout << "In Base\n"; }
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base{value}
    {
    }
    void identify() const
    {
        Base::identify(); // call Base::identify() first
        std::cout << "In Derived\n";
    }
};

int main()
{
    Base b1{5};
    b1.identify();

    Derived derived{7};
    derived.identify();

    return 0;
}