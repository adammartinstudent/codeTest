#include <iostream>
using namespace std;

class Value
{
private:
    int m_value{ 0 };

public:
    int operator() (int x) // Overloads () operator
    {
        return (m_value += x); // Accumulates value from 0
    }
};

int main()
{
    Value v{};
    int a(2);
    int b(3);
    // Value call executes in reverse, so make a new line to prevent reverse output
    cout << v(a) << " + " << b << " = "; // 2 + 3 = 
    cout << v(b) << endl; // 5
    // cout << v(a) << " + " << b << " = " << v(b) << endl;
    // results in 5 + 3 = 3
    return 0;
}
