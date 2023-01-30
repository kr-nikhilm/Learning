#include <iostream>
using namespace std;

class Animal // abstract base class
{
protected:
    string m_name{};

public:
    Animal(string name)
        : m_name{name}
    {
    }

    const string &getName() const { return m_name; }
    virtual string speak() const = 0; // pure virtual function

    //int doSomething() = 0; // Compile error: can not set non-virtual functions to 0
};

class Dog : public Animal
{
public:
    Dog(string name) : Animal{name}
    {
    }
    string speak() const override
    {
        return "Woof";
    }
};

int main()
{
    Dog d{"Tom"};
    cout << d.getName() << " says " << d.speak() << "\n";

    return 0;
}