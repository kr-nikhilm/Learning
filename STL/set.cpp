#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(1);
    st.insert(3);
    st.insert(1);

    for (auto x : st)
    {
        cout << x << " ";
    }
    cout << "\n";
    //st.erase(1); // it will delete all element with value 1
    st.erase(st.find(1));   //it will delete element only at location which it find first 1
    for (auto x : st)
    {
        cout << x << " ";
    }
    cout << "\n";
    return 0;
}