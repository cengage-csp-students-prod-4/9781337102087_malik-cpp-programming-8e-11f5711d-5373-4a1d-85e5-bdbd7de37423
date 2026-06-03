#include <iostream>

using namespace std;

int main() {
    int quarters, dimes, nickels;
    cout << "Enter the number of quarters: ";
    cin >> quarters;
    
    cout << "Enter the number of dimes: ";
    cin >> dimes;
    
    cout << "Enter the number of nickels: ";
    cin >> nickels;
    int total_pennies = (quarters * 25) + (dimes * 10) + (nickels * 5);
    cout << total_pennies << endl;
    
    return 0;
}