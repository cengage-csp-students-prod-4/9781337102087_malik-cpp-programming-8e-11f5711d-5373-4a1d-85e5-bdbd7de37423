#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double num1, num2, num3, num4, num5;
    cout << "Enter five decimal numbers: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;
    double sum= num1 + num2+ num3 + num4 + num5;
    int nearest_integer = round(sum);
    cout << nearest_integer << endl;
    return 0;
}