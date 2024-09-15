#include <iostream>
using namespace std;

// Define a constant value for Pi using a macro
#define PI 3.14

// Define a macro to calculate the square of a number
#define Square(r) ((r) * (r))

int main()
{
    // Declare a variable to store the radius
    int r;

    // Prompt the user to enter the radius of the circle
    cout << "Enter radius of a circle: ";
    cin >> r;

    // Calculate the area of the circle using the formula: Area = PI * r^2
    // The macro PI is used for Pi, and the Square macro is used to calculate the square of the radius
    double area = PI * Square(r);

    // Output the area of the circle
    cout << "Area of a circle: " << area << endl;

    return 0;
}