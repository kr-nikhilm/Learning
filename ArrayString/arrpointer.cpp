#include <iostream>
using namespace std;

int main()
{
    int array[5]{ 9, 7, 5, 3, 1 };
    cout << array << '\n';	 
    cout << &array << '\n'; 

    cout << '\n';

    int* ptr{ array };
    cout << ptr << '\n';	 
    cout << &ptr << '\n';	 


    *ptr=10;
    *(ptr+2)=15;
    for(auto x:array){
        cout<<x<<' ';
    }
    cout<<"\n";

    return 0;
}