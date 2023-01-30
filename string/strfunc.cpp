#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    cout << s.length() << "\n";
    cout << s.capacity() << "\n";
    s[3] = 't';
    cout << s.at(0) << "\n";
    cout << s << "\n";

    string st = "onetwothree";
    s.append(st, 3, 2); // append substring of sTemp starting at index 3 of length 2
    cout << s << "\n";

    s.insert(0,"qqq");
    cout<<s<<"\n";
    return 0;
}