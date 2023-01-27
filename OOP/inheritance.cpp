#include <bits/stdc++.h>
using namespace std;

class person
{

public:
    string name;
    int age;

    person(const string &name = "", int age = 0)
        : name{name}, age{age}
    {
    }

    const string &getName()
    {
        return name;
    }

    int getAge()
    {
        return age;
    }
};

class Employee : public person
{
public:
    int id;
    double salary;

    Employee(int id = 0, double salary = 0.0)
        : id{id}, salary{salary}
    {
    }
    void print()
    {
        cout << name<<" has salary "<<salary<<"\n";
    }
};

int main()
{
   Employee e1;
   e1.name="Nikhil";
   e1.salary=30000.0;
   e1.print();


   Employee e2{5,45000.0};
   e2.name="Vishal";
   e2.print();
    return 0;
}