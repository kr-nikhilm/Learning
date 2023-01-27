#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Array
{

private:
    int m_length;
    T *m_data;

public:
    Array(int length)
    {
        assert(length > 0);
        m_data = new T[length]{};
        m_length = length;
    }
    ~Array()
    {
        delete[] m_data;
    }

    T& operator[](int index)
    {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    }

    int getLength()
    {
        return m_length;
    }
};

int main()
{

    Array<int> intArray{12};
    Array<double> doubleArray{12};

    for (int i = 0; i < intArray.getLength(); i++)
    {
        intArray[i] = i;
        doubleArray[i] = i + 0.5;
    }
    for (int i = 0; i < intArray.getLength(); i++)
        cout << intArray[i] << '\t' << doubleArray[i] << '\n';
    return 0;
}