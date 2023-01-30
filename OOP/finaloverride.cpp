#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual string getName() { return "A"; }
};

class B : public A
{
public:
    // use of final makes this function no longer overridable
    string getName() override final { 
        return "B"; 
    } // overrides A::getName()
};

class C : public B
{
public:
    string getName() override { 
        return "C"; 
        } // compile error: overrides B::getName(), which is final
};