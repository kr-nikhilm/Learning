#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter length:";
    cin >> n;
    int* arr {new int[n]};

    arr[0]=7;
    delete []arr;
    cout<<arr[0]<<"\n";
    return 0;
}