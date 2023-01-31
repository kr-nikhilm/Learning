#include <bits/stdc++.h>
using namespace std;

class Base
{

public:
    Base()
    {
        cout << "In Constructor\n";
    }
    ~Base()
    {
        cout << "In Destructor\n";
    }
};

int main()
{

    Base *b1{new Base};
    shared_ptr<Base> st{b1};
    {
        shared_ptr<Base> st2{st};
        //shared_ptr<Base> st2{b1}; //error: crashes
        cout << "Inside Inner Block\n";
    }
    cout << "Out of Inner Block\n";
    return 0;
}