#include <iostream>
using namespace std;
int main() {
    const double PI = 3.1416;
    double wireLength;
    double radius;
    double area;
    
    cout << "Enter the length of the wire: ";
    cin >> wireLength;

    radius = wireLength / (2 * PI);
    area = PI * radius * radius;

    cout << "Radius of the circle: " << radius << endl;
    cout << "Area of the circle: " << area << endl;
    return 0;
}