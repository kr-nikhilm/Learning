#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[]{23, 7, 2, 33, 8, 3, 13, 1};
    int sz = sizeof(array) / sizeof(array[0]);
    for (int i = 0; i < sz; i++)
    {
        cout << array[i] << ' ';
    }

    cout << '\n';
    sort(begin(array), end(array));
    for (auto x : array)
    {
        cout << x << ' ';
    }

    char str[]{"string"};
    str[1] = 'p';

    cout << str << "\n";
    cout<<size(str);
    return 0;
}