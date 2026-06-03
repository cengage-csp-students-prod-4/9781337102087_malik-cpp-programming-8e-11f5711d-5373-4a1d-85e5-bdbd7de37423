#include <iostream>
using namespace std;
int main() {
    int total_seconds;
    cout << "Enter the elapsed time in seconds: ";
    cin >> total_seconds;
    int hours = total_seconds / 3600;
    int remaining_seconds = total_seconds % 3600;
    int minutes = remaining_seconds / 60;
    int seconds = remaining_seconds % 60;
    cout << hours << ":" << minutes << ":" << seconds << endl;
    return 0;
}