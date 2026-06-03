#include <iostream>
using namespace std;
int main() {

    double bag_capacity;
    const double POUNDS_PER_TON = 2205.0;
    cout << "Enter the amount of rice a bag can hold (in pounds): ";
    cin >> bag_capacity;

    double bags_needed = POUNDS_PER_TON / bag_capacity;
    
    cout << 'Number of bags needed: ' << bags_needed << endl;
    return 0;
}