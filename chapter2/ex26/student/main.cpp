#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double doorLength, doorWidth;
    double windowLength, windoWidth;
    double bookshelfLength, bookshelfWidth;
    double roomLength, roomWidth, roomHeight;

    cout << "Enter the length and width of the door (in feet): ";
    cin >> doorLength >> doorWidth;
    cout << "Enter the length and width of each window (in feet): ";
    cin >> windowLength >> windoWidth;

    cout << "Enter the length and width of the bookshelf (in feet): ";
    cin >> bookshelfLength >> bookshelfWidth;
    cout << "Enter the length, width, and height of the room (in feet): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    double doorArea = doorLength * doorWidth;
    double twoWindowsArea = 2 * (windowLength * windoWidth);
    double bookshelfArea = bookshelfLength * bookshelfWidth;
    double totalWallArea = 2 * (roomLength * roomHeight) + 2 * (roomWidth * roomHeight);
    double paintableArea = totalWallArea - (doorArea + twoWindowsArea + bookshelfArea);
    double gallonsNeeded = paintableArea / 120.0;

    cout << "\n --- Results ---" << endl;
    cout << "Paintable area: " << paintableArea << " square feet." << endl;
    cout << "Amount of paint needed: " << gallonsNeeded << " gallons." << endl;
    return 0;
}