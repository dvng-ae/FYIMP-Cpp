#include <iostream>
using namespace std;

inline float circle(float radius) {
    return 3.14f * radius * radius;
}

inline float square(float side) {
    return side * side;
}

inline float rectangle(float length, float breadth) {
    return length * breadth;
}

inline float triangle(float base, float height) {
    return 0.5f * base * height;
}

int main() {
    float radius, side, length, breadth, base, height;

    cout << "\nEnter radius of circle: ";
    cin >> radius;
    cout << "Area of Circle = " << circle(radius) << endl;

    cout << "\nEnter side of square: ";
    cin >> side;
    cout << "Area of Square = " << square(side) << endl;

    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    cout << "Area of Rectangle = " << rectangle(length, breadth) << endl;

    cout << "\nEnter base of triangle: ";
    cin >> base;
    cout << "Enter height of triangle: ";
    cin >> height;
    cout << "Area of Triangle = " << triangle(base, height) << endl;

    return 0;
}
