#include <bits/stdc++.h>
using namespace std;

int main(){
    array <string,7> days{
         "Monday" , "Tuesday" , "Wednesday" , "Thursday" , "Friday" , "Saturday" , "Sunday"
     };

    auto sameletter{
        adjacent_find(days.begin(),days.end(),
        [](auto &a,auto &b){
            return a[0]==b[0];
        }
        )
    };

    if(sameletter!=days.end()){
        cout<<*sameletter<<" "<<*next(sameletter)<<"\n";
    }
    return 0;
}
