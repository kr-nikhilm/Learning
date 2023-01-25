#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v2;
    vector<int> v1(5);
    vector<int> v{2, 24, 12, 42, 1};

    cout << v.size() << "\n";
    v.resize(7);
    cout << v.size() << "\n";
    cout<<v.capacity()<<"\n";
    sort(v.begin(), v.end());
    sort(v.begin(), v.end(),greater<int>());

    v.push_back(56);
    v.pop_back();

    return 0;
}