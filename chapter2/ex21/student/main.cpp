#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double K = 6.67e-8;
    double m1, m2, d;
    cout << "Enter the mass of the first body (M1): ";
    cin >> m1;
    cout << "Enter the mass of the second body (M2): ";
    cin >> m2;
    cout << "Enter the distance between them (d): ";
    cin >> d;

    double force = K * (m1 * m2) / (d * d);
        std::cout << "The force between the bodies is: " << force << " dyn" << endl;
    return 0;
}