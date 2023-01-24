#include <iostream>
using namespace std;

#define PRINT_JOHN

int main()
{
#ifdef PRINT_JOHN
    cout<<"John\n";
#endif
#ifdef PRINT_MARTIN
   cout<<"Martin\n";
#endif
    return 0;
}