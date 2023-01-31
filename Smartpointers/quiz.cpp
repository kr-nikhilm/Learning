#include <bits/stdc++.h>
using namespace std;

class Fraction
{
private:
    int num = 0;
    int den = 1;

public:
    Fraction(int numerator = 0, int denominator = 1) : num{numerator}, den{denominator}
    {
    }

    friend ostream &operator<<(ostream &output, Fraction &x);
};
ostream &operator<<(ostream &output, Fraction &x)
{
    output << x.num << '/' << x.den;
    return output;
}

void printFraction(Fraction *ptr)
{
    if (ptr)
        cout << *ptr << '\n';
    else
        cout << "No fraction\n";
}

int main()
{
    // auto* ptr{new Fraction{3, 5}};

    auto ptr{make_unique<Fraction>(7, 9)};

    printFraction(ptr.get()); // get is used to get pointer to the resource

    return 0;
}