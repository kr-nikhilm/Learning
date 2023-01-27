#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    for (int i = 0; i < 5; i++)
    {
        li.push_back(i);
    }
    auto index = find(li.begin(), li.end(), 3);

    li.insert(index, 9);

    cout << *min_element(li.begin(), li.end()) << "\n";
    cout << *max_element(li.begin(), li.end()) << "\n";

    for (int x : li)
        cout << x << ' ';

    cout << '\n';

    vector<int> v{-7, -3, 6, 2, -5, 0, 4};
    sort(v.begin(), v.end());
    sort(v.begin(),v.end(),greater<int>());
    for (int i : v)
    {
        cout << i << ' ';
    }

    cout << '\n';
    reverse(v.begin(), v.end());

    for (int x : v)
    {
        cout << x << ' ';
    }

    cout << '\n';
    return 0;
}