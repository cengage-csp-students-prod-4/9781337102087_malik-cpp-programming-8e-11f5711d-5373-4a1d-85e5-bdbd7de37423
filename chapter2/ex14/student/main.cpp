#include <iostream>
using namespace std;
int main() {
double manufacturerSizeBG;
cout << "Enter the hard drive size in BG (as specified by the manufacturer): ";
cin >> manufacturerSizeBG;
double totalByters = manufacturerSizeBG * 1000 * 1000 * 1000;
double actualSizeGB = totalByters / (1024 * 1024 * 1024);
cout << "The actual storage copacity of the hard drive is: " << actualSizeGB << " GB " << endl;
    return 0;
}