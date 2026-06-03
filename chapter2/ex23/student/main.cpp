#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    const double SERVICE_CHARGE_RATE = 0.015;
    double buyingPrice;
    double sellingPrice;
    int sharesSold;

    cout << "Enter the buying price of each share: ";
    cin >> buyingPrice;
    cout << "Enter the selling price of each share: ";
    cin >> sellingPrice;
    cout << "Enter the number of shares sold: ";
    cin >> sharesSold;

    double rawBuyAmount = buyingPrice * sharesSold;
    double buyServiceCharge = rawBuyAmount * SERVICE_CHARGE_RATE;
    double totalInvested = rawBuyAmount + buyServiceCharge;
   
    double rawSellAmount = sellingPrice * sharesSold;
    double sellServiceCharge = rawSellAmount * SERVICE_CHARGE_RATE;
    double totalReceived = rawSellAmount - sellServiceCharge;

    double totalServiceCharges = buyServiceCharge + sellServiceCharge;
    double netGainOrLoss = totalReceived - totalInvested;

    cout << fixed << showpoint;

    cout << "Total amount invested: $" << setprecision(1) << totalInvested << endl;
    cout << "Total amount received: $" << setprecision(2) << totalReceived << endl;
    cout << "Total service charges: $" << setprecision(3) << totalServiceCharges << endl;
    cout << "Amount gained or lost: $" << setprecision(3) << netGainOrLoss << endl;

    return 0;
}