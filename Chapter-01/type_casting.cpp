#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 26.3;

    // Implicit_type_casting
    float b2 = a;
    cout << b2 << endl;
    int a2 = b;
    cout << a2 << endl;

    // Explicit_type_casting
    float b3 = (float)a;
    cout << b3 << endl;
    int a3 = (int)b;
    cout << a3 << endl;
    
    return 0;
}