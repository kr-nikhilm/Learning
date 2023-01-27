#include <bits/stdc++.h>
using namespace std;

class A final
{
public:
    virtual string getName()
    {
        return "A";
    }
};

class B : public A
{
public:
    string getName() {return "B";}
};

int main()
{

    return 0;
}