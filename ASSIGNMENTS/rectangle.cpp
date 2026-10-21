#include <iostream>
using namespace std;

class Rectangle {
private:
    double width;
    double length;

public:
    void setRectangleWidth(double w)
    {
        width=w;
    }
    void setRectangleLength(double l)
    {
        length=l;
    }
    double getRectangleWidth()
    {
        return width;
    }
    double getRectangleLength()
    {
        return length;
    }
    double getRectangleArea()
    {
        return width*length;
    }
    double getRectanglePerimeter()
    {
        return 2 * (width + length);
    }
};

int main() {
    Rectangle rectangle1;
    rectangle1.setRectangleWidth(5.8);
    rectangle1.setRectangleLength(7);
    cout << "Rectangle 1: " << endl;
    cout << "Width: " << rectangle1.getRectangleWidth() << endl;
    cout << "Length: " << rectangle1.getRectangleLength() << endl;
    cout << "Area: " << rectangle1.getRectangleArea() << endl;
    cout << "Perimeter: " << rectangle1.getRectanglePerimeter() << endl;

    Rectangle rectangle2;
    rectangle2.setRectangleWidth(3.6);
    rectangle2.setRectangleLength(9);
    cout << "\nRectangle 2: " << endl;
    cout << "Width: " << rectangle2.getRectangleWidth() << endl;
    cout << "Length: " << rectangle2.getRectangleLength() << endl;
    cout << "Area: " << rectangle2.getRectangleArea() << endl;
    cout << "Perimeter: " << rectangle2.getRectanglePerimeter() << endl;

    return 0;
}