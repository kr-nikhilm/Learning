#include <iostream>
using namespace std;

const string& getProgramName() // return a const reference
{
    const string programName="Calculator";

    return programName; //error: can't return local variable
}

int main()
{
    string name { getProgramName() }; // makes copy of dangling reference
    cout << "This program is named " << name << '\n'; // undefined behavior

    return 0;
}