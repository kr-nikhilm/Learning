#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    for (int i = 0; i < 5; i++)
    {
        li.push_back(i);
    }

    list<int>::iterator it = li.begin();

    while (it != li.end())
    {
        cout << *it << ' ';
        it++;
    }
    cout << "\n";

    set<int> st;
    st.insert(3);
    st.insert(-5);
    st.insert(31);
    st.insert(65);
    st.insert(-7);
    st.insert(3);

    set<int>::iterator it2 = st.begin();
    while (it2 != st.end())
    {
        cout << *it2 << ' ';
        it2++;
    }
    cout << "\n";

    return 0;
}