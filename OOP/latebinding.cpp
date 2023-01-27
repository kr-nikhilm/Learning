#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int x{};
    cout << "Enter a number: ";
    cin >> x;

    int y{};
    cout << "Enter another number: ";
    cin >> y;
   
    int op;
    cout << "Enter an operation (0=add, 1=subtract, 2=multiply): ";
    cin >> op;

    int (*pFcn)(int, int){nullptr};

    // Set pFcn to point to the function the user chose
    switch (op)
    {
    case 0:
        pFcn = add;
        break;
    case 1:
        pFcn = subtract;
        break;
    case 2:
        pFcn = multiply;
        break;
    }

    // This uses late binding
    cout << "The answer is: " << pFcn(x, y) << '\n';

    return 0;
}