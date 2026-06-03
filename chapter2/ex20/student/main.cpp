#include <iostream>

using namespace std;

int main() {
    double purchaseCost;
    double minMarkup;
    double maxMarkup;
    double fixedCommission;
    double commissionPercentage;

    cout << "Enter the purchasing cost of the car: $";
    cin >> purchaseCost;

    cout << "Enter the minimum to be added to the purchasing cost: $";
    cin >> minMarkup;

    cout << "Enter the maximum to be added to the purchasing cost: $";
    cin >> maxMarkup;

    cout << "Enter the salesperson's fixed commission: $";
    cin >> fixedCommission;

    cout << "Enter the percentage of the commission (e.g., 30 for 30%): ";
    cin >> commissionPercentage;

    double minSellingPrice = purchaseCost + minMarkup;
    double maxSellingPrice = purchaseCost + maxMarkup;

    double minCommission = fixedCommission + ((commissionPercentage / 100.0) * minMarkup);
    double maxCommission = fixedCommission + ((commissionPercentage / 100.0) * maxMarkup);

    cout << "--------------------------------------------------" << endl;
    cout << "OUTPUT RESULTS:" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Minimum Selling Price: $" << minSellingPrice << endl;
    cout << "Maximum Selling Price: $" << maxSellingPrice << endl;
    cout << "Salesperson's Commission Range: $" << minCommission << " to $" << maxCommission << endl;
    cout << "--------------------------------------------------" << endl;

    return 0;
}