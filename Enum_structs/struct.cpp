#include <iostream>
using namespace std;

struct Employee
{
    int id;
    int age;
    double wage;
};

int main()
{

    Employee Nikhil = {1, 22, 35000.0};
    Employee Yash{3, 28, 45782.0};

    Employee *ptr{&Nikhil};
    // cout<<ptr.age<<"\n"; not allowed
    cout << (*ptr).age << "\n";
    cout << ptr->age << "\n";
    return 0;
}