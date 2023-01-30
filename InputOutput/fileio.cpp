#include <bits/stdc++.h>
using namespace std;

int main(){
    //ofstream f1="hello.txt"; //error


    // ofstream f2{"hello.txt"};
    // if(!f2){
    //     cerr<<"Error"<<"\n";
    //     return 1;
    // }
    // f2<<"first line\n";
    // f2<<"Second line\n";
    // f2.close();

    // f2.open("hello.txt",ios::app);
    // f2<<"Third line\n";
    // f2.close();




    ifstream r1 {"hello.txt"};
    if(!r1){
        cerr<<"Error"<<"\n";
        return 1;
    }
    while(r1){
        string s;
        //r1>>s; // stores word not line
        getline(r1,s); //stores line
        cout<<s<<"\n";
    }


   
    return 0;
}