#include<bits/stdc++.h>
using namespace std;

template <typename T>
T add(T x,T y){
    return x+y;
}

template <typename A>
A another(A x,A y){
    return x+y;
    // return to_string(x)+to_string(y);
}
int main(){
    cout<< add(5,10)<<"\n";
    cout<< add(5.1f,10.2f)<<"\n";
    string s1 = "Good ", s2 = "Evening";
    cout<<another(s1,s2)<<"\n";
    cout<<another<string>("Hello ", "world")<<"\n";
    return 0;
}