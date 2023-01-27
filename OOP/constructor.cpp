#include<iostream>
using namespace std;

class Fraction{
private:
    int num;
    int den;

public:
   Fraction(){
    num=0;
    den=1;
   }
   double getvalue(){
    return double(num)/den;
   }

};

int main(){
    Fraction frac; // callls default constructor

    cout<<frac.getvalue()<<"\n";
    return 0;
}