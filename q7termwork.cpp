#include <iostream>
using namespace std;
#include <iostream>
using namespace std;

double calculateArea(double side)
{
    return side * side; // Area of square
}

double calculateArea(double length, double width)
{
    return length * width; // Area of rectangle
}

double calculateArea(int base, double height)
{
    return 0.5 * base * height; // Area of triangle
}

int main()
{
    double side, length, width, height;
    int base;

    cout << "Enter the side length of the square: ";
    cin >> side;
    cout << "Area of square: " << calculateArea(side) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of rectangle: " << calculateArea(length, width) << endl;

    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << calculateArea(base, height) << endl;

    return 0;
}
