#include <bits/stdc++.h>
using namespace std;

class Person
{

public:
    string p_name;
    int p_age;

    Person(const string name = "", int age = 0)
        : p_name{name}, p_age{age}
    {
    }

    const string& getName()
    {
        return p_name;
    }

    int getAge()
    {
        return p_age;
    }
};

class Employee : public Person
{
private:
    int m_id;
    double m_salary;

public:
    Employee(string name = "", int age = 0, int id = 0, double salary = 0.0)
        : Person{name, age},
          m_id{id}, m_salary{salary}
    {
    }
    int getId() const {
        return m_id;
    }
    double getSalary() const {
        return m_salary;
    }

};
int main()
{
    Employee e1{"Nikhil", 21, 4, 40000.0};
    cout << e1.getName() << "\n";
    cout << e1.getAge() << "\n";
    cout << e1.getId() << "\n";
    cout << e1.getSalary() << "\n";
}