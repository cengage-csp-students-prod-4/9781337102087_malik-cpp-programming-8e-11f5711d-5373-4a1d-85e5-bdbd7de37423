#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    const double CARTON_CAPACITY = 3.78;
    const double COST_PER_LITER = 0.38;
    const double PROFIT_PER_CARTON = 0.27;
    double totalMilk;
    cout << "Enter the total amount of milk produced: ";
    cin >> totalMilk;
    int cartonsNeeded = round(totalMilk / CARTON_CAPACITY);
    double productionCost = totalMilk * COST_PER_LITER;
    double totalProfit = cartonsNeeded * PROFIT_PER_CARTON;
    cout << fixed << setprecision(2);
    cout << "Number of milk cartons needed: " << cartonsNeeded << endl;
    cout << "Cost of producing milk: $" << productionCost << endl;
    cout << "Profit for producing milk: $" << totalProfit << endl;
    return 0;
}