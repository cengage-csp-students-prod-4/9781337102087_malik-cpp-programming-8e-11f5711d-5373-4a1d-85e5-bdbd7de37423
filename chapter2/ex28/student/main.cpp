#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int numStudents;
    double caloriesPerStudent;
    double caloriesPerPoundNuts;
    double totalCaloriesNeeded;
    double caloriesPerPoundFruit;
    double poundsEach;

    cout << "Enter the number of students: ";
    cin >> numStudents;
    cout << "Enter the calories required per student: ";
    cin >> caloriesPerStudent;
    cout << "Enter the calroeis per pound of nuts: ";
    cin >> caloriesPerPoundNuts;

    totalCaloriesNeeded = numStudents * caloriesPerStudent;
    caloriesPerPoundFruit = caloriesPerPoundNuts / 0.70;
    poundsEach = totalCaloriesNeeded / (caloriesPerPoundNuts + caloriesPerPoundFruit);

    cout << "Amount of nuts needed: " << poundsEach << "lbs" << endl;
    cout << "Amount of dried fruit needed: " << poundsEach << "lbs" << endl;
    return 0;
}