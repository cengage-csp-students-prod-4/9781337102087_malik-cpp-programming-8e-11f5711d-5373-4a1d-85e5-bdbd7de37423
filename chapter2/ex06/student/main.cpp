#include <iostream>
#include <string>
using namespace std;
int main ()
{

string name;
double studyHours;

cout << "Enter name:";
cin >> name;
cout << "Enter study hours:";
cin >> studyHours;

cout << "Name: " << name << "! On Saturday, you studied " << studyHours << "hours." << endl;

return 0;
}