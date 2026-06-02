#include <iostream>
#include <string>
using namespace std;
int main()
{
    const int SECRET = 11;
    const double RATE = 12.50;
int num1, num2, newNum;
string name;
double hoursWorked, wages;
cout << "Enter two integers: ";
cin >> num1 >> num2;
cout << "Enter last name: ";
cin >> name;
cout << "Enter a decimal number between 0 and 70: ";
cin >> hoursWorked;
wages = Rate * hoursWorked;
cout << "The value of num1 = " << num1 << " and the value of num2 = " << num2 << "." << endl;
newNum = (num1 * 2) + num2;
cout << "The value of newNum = " << newNum << endl;
cout << "Name: " << name << endl;
cout << "Pay Rate: $" << RATE << endl;
cout << "Hours Worked: " << hoursWorked << endl;
cout << "Salery: $ " << wages << endl;
return 0;
}
