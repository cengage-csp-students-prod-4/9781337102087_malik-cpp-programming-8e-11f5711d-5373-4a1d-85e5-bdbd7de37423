#include <iostream>
using namespace std;                                   
int main()
{
double tankCapacity;
double milesPerGallon;
double maxMiles;
cout << "Enter the fuel tank copacity (in gallons): ";
cin >> tankCapacity;
cout << "Enter the estimated miles per gallon (MPG): ";
cin >> milesPerGallon;
maxMiles = tankCapacity * milesPerGallon;
cout << "The automobile can be driven " << maxMiles << "miles without refueling." << endl;
    return 0;
}