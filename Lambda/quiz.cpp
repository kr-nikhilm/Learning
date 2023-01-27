#include <bits/stdc++.h>
using namespace std;

struct Student
{
   string name;
   int points;
};

int main()
{

   array<Student, 8> arr{{
      {"Ben", 5},
      {"Greg", 3},
      {"Dan", 8},
      {"Francis", 1},
      {"Hagrid", 5},
      {"John", 7},
      {"Albert", 2},
      {"Christine", 6}
   }};

   auto big{
      max_element(arr.begin(), arr.end(),
       [](auto &a, auto &b)
       {
          return a.points<b.points; 
       }
      )

   };


   cout<<big->name<<"\n";

   return 0;
}