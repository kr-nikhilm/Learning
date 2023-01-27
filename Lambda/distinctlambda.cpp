#include <bits/stdc++.h>
using namespace std;

int main(){
    auto print{
        [](auto value){
            static int count=0;
            cout<<count++<<":"<<value<<"\n";
        }
    };

    print("hello"); //0:hello
    print("world"); //1:world

    print(5); //0:5
    print(7); //1:7
    print(9); //2:9

    print(3.0);
    print(13.3);
    print(1.1);

    print("another string"); // 2:another..
    return 0;
}