#include <iostream>
using namespace std;

class Base
{
protected:
    int m_value{};

public:
    Base(int value)
        : m_value{value}
    {
    }

    virtual string getName() const { return "Base"; }
    int getValue() const { return m_value; }
};

class Derived : public Base
{
public:
    Derived(int value)
        : Base{value}
    {
    }

    string getName() const override { return "Derived"; }
};

// void printName(const Base base) // base passed by value
// {
//     cout << "I am a " << base.getName() << '\n'; //output base
// }

void printName(const Base &base) // base now passed by reference
{
    cout << "I am a " << base.getName() << '\n'; // output derived
}

int main()
{
    Derived derived = 7;
    Base base{derived};
    cout << "base is a " << base.getName() << " and has value " << base.getValue() << '\n'; //output base 
    Derived d = 5;
    printName(d);
    return 0;
}