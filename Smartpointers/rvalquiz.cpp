#include<bits/stdc++.h>

int main()
{
    int a;

    // l-value references
    int &ref1{a};  
    int &ref2{5};  //error

    const int &ref3{a};
    const int &ref4{5};

    // r-value references
    int &&ref5{a}; //error
    int &&ref6{5};

    const int &&ref7{a}; //error
    const int &&ref8{5};

    return 0;
}