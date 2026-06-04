#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double doorLength, doorWidth;
    double windowLength, windowWidth;
    double bookshelfLength, bookshelfWidth;
    double roomLength, roomWidth, roomHeight;
    double areaPerGallon;

    cout << "Enter the length and width of the door (in feet): ";
    cin >> doorLength >> doorWidth;
    cout << "Enter the length and width of each window (in feet): ";
    cin >> windowLength >> windowWidth;

    cout << "Enter the length and width of the bookshelf (in feet): ";
    cin >> bookshelfLength >> bookshelfWidth;
    cout << "Enter the length, width, and height of the room (in feet): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    cout << "Enter the area that can be painted with one gallon of paint (in sq ft): ";
    cin >> areaPerGallon;
    
    double totalWallArea = 2 * (roomLength * roomHeight) + 2 * (roomWidth * roomHeight);
    double doorArea = doorLength * doorWidth;
    double windowsArea = 2 * (windowLength * windowWidth);
    double bookshelfArea = bookshelfLength * bookshelfWidth;

    double paintableArea = totalWallArea - (doorArea + windowsArea + bookshelfArea);
    double gallonsNeeded = paintableArea / areaPerGallon;

    cout << "Paintable area: " << paintableArea << " sq ft" << endl;
    cout << "Amount of paint needed: " << gallonsNeeded << " gallons" << endl;
    return 0;
}