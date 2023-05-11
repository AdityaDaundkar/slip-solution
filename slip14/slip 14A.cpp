#include <iostream>
using namespace std;

int main() {
    double radius, diameter, circumference, area;
    const double PI = 3.14159265358979323846;

    // Accept radius input from user
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    // Calculate diameter, circumference, and area
    diameter = 2 * radius;
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    // Display the results
    cout << "Diameter: " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;

    return 0;
}
