#include <iostream>
using namespace std;
int add(int x, int y)
{
    return x + y;
}

double add(double x, double y)
{
    return x + y;
}

int main()
{
    add(10,15);
    cout<<add(10, 15);
    cout<<'\n';
    cout<<add(1.2, 3.4)<<"\n";

    return 0;
}

//This program will give error
// #include <iostream>
// using namespace std;
// int add(int x, int y)
// {
//     return x + y;
// }



// double add(int x, int y)
// {
//     return x + y;
// }

// int main()
// {
//     cout<<add(10, 15);
//     cout<<'\n';
//     cout<<add(1.2, 3.4)<<"\n";

//     return 0;
// }



