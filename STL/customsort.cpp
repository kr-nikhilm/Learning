#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> &a, pair<int, int> &b)
{
    if(a.second<b.second) return true;
    if(a.second>b.second)  return false;
    if(a.first>a.second) return true;
    return false;
}

int main()
{

    vector<pair<int, int>> v = {{10, 3}, {20, 1}, {30, 2}, {25, 2}};
    for (auto x : v)
    {
        cout << x.first << " " << x.second << "\n";
    }
    cout<<"\nAfter Sorting\n";


    //sort element by second
    //if both second points are same then sort according to their first points
    sort(v.begin(), v.end(),[](pair<int,int> &a,pair<int,int> &b){
        return a.second<b.second;
    });
    for (auto x : v)
    {
        cout << x.first << " " << x.second << "\n";
    }
}