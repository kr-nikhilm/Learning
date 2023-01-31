#include <bits/stdc++.h>
using namespace std;

class person
{
public:
  person()
  {
    cout << "In Constructor\n";
  }
  ~person()
  {
    cout << "In Destructor\n";
  }
};

int main()
{
  unique_ptr<person> p1(new person());
  unique_ptr<person> p2;

  // p2=p1;//error: unique_ptr doesn't allow copy assignment
  p2 = move(p1);  //res1 to res2  ... res1 will be null


  if(p1) cout<<"Not Null\n";
  else cout<<"Null\n";
  return 0;
}