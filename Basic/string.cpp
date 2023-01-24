#include <iostream>
using namespace std;

int main()
{
    string name{};
    cout << "Enter name:";
    getline(cin >> ws, name); // this will read full line
    cout << "Name is " << name;
    return 0;
}