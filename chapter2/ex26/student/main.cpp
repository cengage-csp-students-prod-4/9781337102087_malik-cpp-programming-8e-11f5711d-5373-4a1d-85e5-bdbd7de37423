#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double doorLength, doorWidth;
    double window1Length, window1Width;
    double window2Length, window2Width;
    double bookshelfLength, bookshelfWidth;
    double roomLength, roomWidth, roomHeight;

    cout << "Enter the length and width of the door (in feet): ";
    cin >> doorLength >> doorWidth;
    cout << "Enter the length and width of each window (in feet): ";
     cin >> window1Length >> window1Width >> window2Length >> window2Width;

    cout << "Enter the length and width of the bookshelf (in feet): ";
    cin >> bookshelfLength >> bookshelfWidth;
    cout << "Enter the length, width, and height of the room (in feet): ";
    cin >> roomLength >> roomWidth >> roomHeight;

    double doorArea = doorLength * doorWidth;
    double windowsArea = (window1Length * window1Width) + (window2Length * window2Width);
    double bookshelfArea = bookshelfLength * bookshelfWidth;
    double totalWallArea = 2 * (roomLength * roomHeight) + 2 * (roomWidth * roomHeight);
    double paintableArea = totalWallArea - (doorArea + windowsArea + bookshelfArea);
    double gallonsNeeded = paintableArea / 120.0;

    cout << fixed << setprecision(3) << gallonsNeeded << endl;
    return 0;
}