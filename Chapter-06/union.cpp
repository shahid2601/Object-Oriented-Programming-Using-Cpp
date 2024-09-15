#include <iostream>
using namespace std;

union Emp
{
    int Eid;
    double Esal;
};


int main()
{
    union Emp E;

    E.Eid = 234;
    cout << E.Eid << endl;

    E.Esal = 15000;
    cout << E.Esal << endl;

    return 0;
}