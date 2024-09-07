#include <iostream>
using namespace std;

int b = 20; // Global Variable

int main()
{
    int a = 10; // Local Variable
    int c = 30; // Static Variable

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}