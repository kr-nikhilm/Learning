#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v{"Hello"};
    v.insert(v.begin()+1,"World");
    v.insert(v.begin()+1,2,"C");  
   

    vector<int> v1(7,9);   //insert 7 elements with 9 value of each element
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}