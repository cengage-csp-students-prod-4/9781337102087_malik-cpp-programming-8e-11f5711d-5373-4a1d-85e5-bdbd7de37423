#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double PI = 3.141593;
    double radius;
    double price;
    double area;
    double pricePerSquareInch;
    cout << "Enter the radius of the pizza: ";
    cin >> radius;
    cout << "Enter the price of the pizza: ";
    cin >> price;
    area = PI * radius * radius;
    pricePerSquareInch = price / area;
    cout << fixed << setprecision(6);
    cout << "\nThe price per square inch is" << pricePerSquareInch << endl;
    return 0;
}