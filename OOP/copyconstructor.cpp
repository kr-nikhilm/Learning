#include<bits/stdc++.h>
using namespace std;

class Fraction{
    int num;
    int den;

public:
   Fraction(Fraction& frac)
   :num{frac.num},den{frac.den}
   {
    cout<<"copy constuctor called"<<"\n";
    cout<<num<<" "<<den<<"\n";
   }

   Fraction(int num=0, int den=1)
   :num{num},den{den}
   {
      assert(den!=0);
   }
};

int main(){
  
    Fraction fr1 {7,8}; // direct inialization
    Fraction frcopy {fr1}; // copy constructor
    return 0;
}