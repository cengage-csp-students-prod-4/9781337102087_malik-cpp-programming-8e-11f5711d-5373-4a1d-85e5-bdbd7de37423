#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    const double CARTON_CAPACITY = 3.78;
    double totalMilk;
    double costPerLiter;
    double profitPerCarton;
    cout << "Enter the total amount of milk produced: ";
    cin >> totalMilk;
    cout << "Enter the cost of producing one liter of milk: ";
    cin >> costPerLiter;
    cout << "Enter the profit on each carton of milk: ";
    cin >> profitPerCarton;
    int cartonsNeeded = round(totalMilk / CARTON_CAPACITY);
    double totalCost = totalMilk * costPerLiter;
    double totalProfit = (totalMilk / CARTON_CAPACITY) * profitPerCarton;
    cout << fixed << setprecision(2);
    cout << "The number of milk cartons needed to hold milk: " << cartonsNeeded << endl;
    cout << "The cost of producing milk: " << totalCost << endl;
    cout << "The profit for producing milk: " << totalProfit << endl;
    return 0;
}