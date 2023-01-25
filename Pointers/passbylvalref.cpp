#include <iostream>
using namespace std;

void printval(string& y){  //pass by reference
   cout<<y<<"\n";
}
void add(int x){
   x++;   //doesn't change actual value
}

void add2(int& z){
    z++; //change the actual value
}
int main(){
    string s{"Hello World"};
    printval(s);


    int a{7};
    add(a);
    cout<<a<<"\n";
    

    add2(a);
    cout<<a<<"\n";

    const int d{11};
    add2(d); // error d is non-modificable value
    add2(6); // error : 6 is rvalue
    
   
    
    return 0;
}