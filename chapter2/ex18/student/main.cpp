#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const double TAX_RATE = 0.14;
    const double CLOTHES_PERCENT = 0.10;
    const double SUPPLIES_PERCENT = 0.01;
    const double BONDS_PERCENT = 0.25;
    const double PARENT_MATCH_RATE = 0.50;

    double payRate;
    double hoursWorked;
    double totalGrossIncome = 0.0;
    double totalHours = 0.0;

    cout << "Enter the pay rate per hour: $";
    cin >> payRate;
    for (int i = 0; i < 5; i++) {
        cout << "Enter the number of hours worked: ";
        cin >> hoursWorked;
        totalHours += hoursWorked;
    }
    totalGrossIncome = payRate * totalHours;

    double taxDeduction = totalGrossIncome * TAX_RATE;
    double netIncome = totalGrossIncome - taxDeduction;
    double clothesExpenses = netIncome * CLOTHES_PERCENT;
    double schoolSupplies = netIncome * SUPPLIES_PERCENT;
    double remainingIncome = netIncome - clothesExpenses - schoolSupplies;
    double savingsBonds = remainingIncome * BONDS_PERCENT;
    double parentsContribution = savingsBonds * PARENT_MATCH_RATE;
    cout << fixed << setprecision(2); 

    cout << endl;
    cout << "Income before taxes: $" << totalGrossIncome << endl;
    cout << "Income after taxes: $" << netIncome << endl;
    cout << "Money spent on clothes and other accessories: $" << clothesExpenses << endl;
    cout << "Money spent on school supplies: $" << schoolSupplies << endl;
    cout << "Money spent to buy savings bonds: $" << savingsBonds << endl;
    cout << "Money spent by parents to buy additional savings bonds: $" << parentsContribution << endl;

    return 0;
}