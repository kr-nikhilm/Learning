#include <iostream>
using namespace std;

int main()
{
    cout << static_cast<int>(10.7)<<"\n";
    char ch{100};
    cout << ch << " has value " << static_cast<int>(ch) << "\n";

    return 0;
}