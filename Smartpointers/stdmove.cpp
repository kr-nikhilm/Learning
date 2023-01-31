#include <bits/stdc++.h>
using namespace std;

template <typename T>
void swapwithoutcopy(T &a, T &b)
{
    T temp{move(a)};
    a = move(b);
    b = move(temp);
}

int main()
{
    string x = "Hello";
    string y = "World";

    cout << "X : " << x << "\n";
    cout << "Y : " << y << "\n";

    swapwithoutcopy(x, y);
    cout << "X : " << x << "\n";
    cout << "Y : " << y << "\n";

    vector<string> v;
    string str = "Nikhil";

    /* v.push_back(str);  //copy value into vector
      cout<<v[0]<<"\n";
      cout<<str<<"\n"; */

    v.push_back(move(str));  //move value from str to vector
    cout << v[0] << "\n";
    cout << str << "\n";
}