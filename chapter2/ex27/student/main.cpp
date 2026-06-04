#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double doorLength, doorWidth;
    double window1Length, window1Width;
    double window2Length, window2Width;
    double bookshelfLength, bookshelfWidth;
    double roomLength, roomWidth, roomHeight;
    double areaPerGallon;

    cout << "Enter the length and width of the door (in feet): ";
    cin >> doorLength >> doorWidth;
    
    cout << "Enter the length and width of the first window (in feet): ";
    cin >> window1Length >> window1Width;
    cout <<"Enter the length and width of the second window (in feet): ";
    cin >> window2Length >> window2Width;

    cout << "Enter the length and width of the bookshelf (in feet): ";
    cin >> bookshelfLength >> bookshelfWidth;
    cout << "Enter the length, width, and height of the room (in feet): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    cout << "Enter the area that can be painted with one gallon of paint (in sq ft): ";
    cin >> areaPerGallon;
    
    double totalWallArea = 2 * (roomLength * roomHeight) + 2 * (roomWidth * roomHeight);
    double doorArea = doorLength * doorWidth;
    double windowsArea = (window1Length * window1Width) + (window2Length * window2Width);
    double bookshelfArea = bookshelfLength * bookshelfWidth;

    double paintableArea = totalWallArea - (doorArea + windowsArea + bookshelfArea);
    double gallonsNeeded = paintableArea / areaPerGallon;

    cout << "Paintable area: " << paintableArea << " sq ft" << endl;
    cout << "Amount of paint needed: " << gallonsNeeded << " gallons" << endl;
    return 0;
}