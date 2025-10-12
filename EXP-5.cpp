#include <iostream>
using namespace std;

class find_area {
public:
    float area(float radius) { // For circle
        return 3.14f * radius * radius;
    }

    double area(double side) { // For square — now uses double
        return side * side;
    }

    float area(float length, float breadth) { // For rectangle
        return length * breadth;
    }

    float area(double base, double height) { // For triangle
        return 0.5f * base * height;
    }
};

int main() {
    float radius, length, breadth;
    double side, base, height;

    find_area a;

    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << a.area(radius) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square = " << a.area(side) << endl;

    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    cout << "Area of Rectangle = " << a.area(length, breadth) << endl;

    cout << "\nEnter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    cout << "Area of Triangle = " << a.area(base, height) << endl;

    return 0;
}
