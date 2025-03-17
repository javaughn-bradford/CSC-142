#include <iostream>
#include "Rectangle.h" 
using namespace std;

int main()
{
    double length, width;

    //  rooms
    Rectangle kitchen, bedroom, livingRoom;

    // Input details for the kitchen
    cout << "Enter the length of the kitchen: ";
    cin >> length;
    kitchen.setLength(length);

    cout << "Enter the width of the kitchen: ";
    cin >> width;
    kitchen.setWidth(width);

    // Input details for the bedroom
    cout << "Enter the length of the bedroom: ";
    cin >> length;
    bedroom.setLength(length);

    cout << "Enter the width of the bedroom: ";
    cin >> width;
    bedroom.setWidth(width);

    // Input details for the living room
    cout << "Enter the length of the living room: ";
    cin >> length;
    livingRoom.setLength(length);

    cout << "Enter the width of the living room: ";
    cin >> width;
    livingRoom.setWidth(width);

    // Output the details for each room
    cout << "\nKitchen details:\n";
    cout << "Length: " << kitchen.getLength() << ", Width: " << kitchen.getWidth()
         << ", Area: " << fixed << setprecision(2) << kitchen.getArea() << endl;

    cout << "\nBedroom details:\n";
    cout << "Length: " << bedroom.getLength() << ", Width: " << bedroom.getWidth()
         << ", Area: " << fixed << setprecision(2) << bedroom.getArea() << endl;

    cout << "\nLiving Room details:\n";
    cout << "Length: " << livingRoom.getLength() << ", Width: " << livingRoom.getWidth()
         << ", Area: " << fixed << setprecision(2) << livingRoom.getArea() << endl;

    // Calculate and output the total area of the apartment
    double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
    cout << "\nTotal area of the apartment: " << fixed << setprecision(2) << totalArea << endl;

    return 0;
}
