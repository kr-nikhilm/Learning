#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base() {}
};

class Derived :public Base
{
public:
    Derived() {}
};

int main()
{
    try{
        throw Derived();
    }
    // catch(Derived& derived){
    //     cerr<<"Derived Type"<<"\n";  
    // }
     catch(Base& base){
        cerr<<"Base Type"<<"\n";
    }

    //Exception.what() tells us which type of exception is generated
    return 0;
}