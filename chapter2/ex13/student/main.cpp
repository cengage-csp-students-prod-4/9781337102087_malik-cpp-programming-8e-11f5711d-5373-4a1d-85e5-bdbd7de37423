#include <iostream>
using namespace std;
int main() {
    double originalPrice;
    double markupPercentage;
    double salesTaxRate;
    double sellingPrice;
    double salesTax;
    double finalPrice;
    cout << "Enter the original price of the item: ";
    cin >> originalPrice;
    cout << "Enter the marked up percentage";
    cin >> markupPercentage;
    cout << "Enter the sales tax rate: ";
    cin >> salesTaxRates;
    cout << endl;
    sellingPrice = originalPrice * (1 + (markupPercentage / 100.00));
    salesTax = sellingPrice * (salesTaxRate / 100.0);
    finalPrice = sellingPrice + salesTax;
    cout << "The original price = $ " << originalPrice << endl;
    cout << "THe price is marked up by " << markupPercentage << "%" << endl;
    cout << "The selling price = $ " << sellingPrice << endl;
    cout << "The sales tax rate =" << salesTaxRate << "%" << endl;
    cout << "The sales tax = $" << salesTax << endl;
    cout << "The final price = $" << finalPrice << endl;
        return 0;
}