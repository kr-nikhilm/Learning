#include <bits/stdc++.h>
using namespace std;

struct Season
{
    string name{};
    double averageTemperature{};
};

int main()
{

    array<Season, 4> arr{{
        {"Spring", 285.0},
        {"Summer", 296.0},
        {"Fall", 288.0},
        {"Winter", 263.0}

    }};

    sort(arr.begin(), arr.end(),
         [](auto &a, auto &b)
         {
             return a.averageTemperature < b.averageTemperature;
         });

    for (auto &x : arr)
    {
        cout<<x.name<<"\n";
    }
    return 0;
}