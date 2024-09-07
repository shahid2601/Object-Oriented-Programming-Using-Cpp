#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    float b = 26.3;
    char c = 'A';

    cout << typeid(a).name() << endl;
    cout << typeid(b).name() << endl;
    cout << typeid(c).name() << endl;
    
    return 0;
}