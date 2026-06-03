#include <iostream>
using namespace std;
int main() {

    double bag_capacity;
    const double POUNDS_PER_TON = 2205.0;
    cin >> bag_capacity;

    double bags_needed = POUNDS_PER_TON / bag_capacity;

    cout << bags_needed << endl;
    return 0;
}