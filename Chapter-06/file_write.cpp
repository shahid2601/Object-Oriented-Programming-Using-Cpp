#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream onfile;
    onfile.open("//home//black//Desktop//file.txt");
    onfile << "Write operation has been performed :)";
    cout << "Data has been written Successfully!!" << endl;
    onfile.close();
    return 0;
}