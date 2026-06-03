#include <iostream>
#include <iomanip>
int main() {
    const double K = 6.67e-8;
    double m1, m2, d;
    std: :cout << "Enter the mass of the first body (M1): ";
    std: :cin >> m1;
    std: :cout << "Enter the mass of the second body (M2): ";
    std: :cin >> m2;
    std: :cout << "Enter the distance between them (d): ";
    std: :cin >> d;

    double force = k * (m1 * m2) / (d * d);
    std: :cout << std: :fixed << std: :setprecision(2);
        std::cout << "The force between the bodies is: " << force << " dyn" << std::endl;
    return 0;
}