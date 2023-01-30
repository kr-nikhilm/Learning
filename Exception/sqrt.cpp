#include<bits/stdc++.h>
using namespace std;


int main(){
    int x;
    cin>>x;

    try{
       if(x<0){
         throw "Can't Find sqrt of negative number";
       }

       cout<<sqrt(x)<<"\n";
    }
    catch(const char* exception){
         cout<<"Error : "<<exception<<"\n";
    }

    
    return 0;
}