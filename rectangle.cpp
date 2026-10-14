#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    // set the width
    void setWidth(double w) {
        width = w;
    }

    //  set the length
    void setLength(double l) {
        length = l;
    }

    // get the width
    double getWidth() {
        return width;
    }

    // get the length
    double getLength() {
        return length;
    }

    // Function to calculate the area
    double calculateArea() {
        return width * length;
    }

    // Function to calculate the perimeter
    double calculatePerimeter() {
        return 2 * (width + length);
    }
};

int main() {
// make first object 
   
    Rectangle rectangle1;

    // Setting dimensions of rectange
    rectangle1.setWidth(5);
    rectangle1.setLength(10);

   
    cout << "Rectangle 1" << endl;
    cout << "Width: " << rectangle1.getWidth() << endl;
    cout << "Length: " << rectangle1.getLength() << endl;
    cout << "Area: " << rectangle1.calculateArea() << endl;
    cout << "Perimeter: " << rectangle1.calculatePerimeter() << endl;

    //make second Rectangle object
    Rectangle rectangle2;

    // Setting  dimensions of rectangle 
    rectangle2.setWidth(4);
    rectangle2.setLength(6);

    cout << "\nRectangle 2" << endl;
    cout << "Width: " << rectangle2.getWidth() << endl;
    cout << "Length: " << rectangle2.getLength() << endl;
    cout << "Area: " << rectangle2.calculateArea() << endl;
    cout << "Perimeter: " << rectangle2.calculatePerimeter() << endl;

    return 0;
