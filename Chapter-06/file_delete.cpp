#include <iostream>
using namespace std;

int main()
{
    int value = remove("//home//black//Desktop//file.txt");
    if (value == 0)
    {
        cout << "File deleted successfully!!" << endl;
    }
    else
    {
        cout << "File not deleted..." << endl;
    }

    return 0;
}