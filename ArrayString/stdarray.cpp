#include <bits/stdc++.h>
using namespace std;

struct Employee
{
    int id;
    int age;
    double wage;
};

int main()
{
    array<int, 5> arr{7, 3, 1, 9, 5};
    cout << arr.size() << "\n";
    for (auto x : arr)
    {
        cout << x << ' ';
    }
    cout << '\n';

    sort(arr.begin(), arr.end());
    for (auto x : arr)
    {
        cout << x << ' ';
    }
    cout << '\n';

    array<int> myArray{9, 7, 5, 3, 1};
    array<Employee, 3> employee{};

    employee[0] = {1, 21, 30000.0};
    employee[1] = {2, 22, 45211.0};
    employee[2] = {3, 31, 35622.0};

    for (auto &emp : employee)
    {
        cout << "Employee id " << emp.id << " is " << emp.age << " Years old\n";
    }

    return 0;
}