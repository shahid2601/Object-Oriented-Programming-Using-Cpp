#include <iostream>
using namespace std;

struct Emp
{
    string name;
    int Eid;
    double Esal;
};


int main()
{
    struct Emp E;
    E.name = "Steve";
    E.Eid = 132;
    E.Esal = 67000;

    cout << E.name << " " << E.Eid << " " << E.Esal << endl;

    cout << sizeof(Emp) << endl;

    return 0;
}