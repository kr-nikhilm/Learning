#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v{"Hello"};
    v.insert(v.begin()+1,"World");
    v.insert(v.begin()+1,2,"C");  
   

    vector<int> v1(7,9);   //insert 7 elements with 9 value of each element
    vector<int> vt{1,2,3,4,5,6,7};
    vt.erase(vt.begin()+2);
      for(auto x:v){
        cout<<x<<" ";
    }
    cout<<"\n";
    for(auto x:vt){
        cout<<x<<" ";
    }
    cout<<"\n";

    return 0;
}