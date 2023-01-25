#include <iostream>
using namespace std;


template <typename T>
struct Pair{
   T first{};
   T second{};
};

template <typename T>
constexpr T max(Pair<T> p){
    return (p.first>p.second ? p.first : p.second);
}


int main(){
   
   Pair<int> p1{5,7};
   cout<<max(p1)<<"\n";

   Pair<double> p2{23.3,13.5};
   cout<<max<double>(p2)<<"\n";
    

    return 0;
}