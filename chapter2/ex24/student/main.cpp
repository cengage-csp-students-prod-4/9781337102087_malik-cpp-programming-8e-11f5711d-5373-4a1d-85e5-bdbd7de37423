#include <iostream>
using namespace std;
int main() {
    double wireLength;
    double width;
    double length;

    cout << "Enter the length of the wwire: ";
    cin >> wireLength;

    width = wireLength / 5.0;
    length = 1.5 * width;

    cout << "Width of the picture frame: " << width << endl;
    cout << "Length of the picture frame: " << length << endl;
    return 0;
}