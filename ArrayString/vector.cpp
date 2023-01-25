#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    vector<int> v1(5);
    vector<int> v2{2, 24, 12, 42, 1};

    cout << v.size() << "\n";
    v.resize(7);
    cout << v.size() << "\n";
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(),greater<int>());

    return 0;
}