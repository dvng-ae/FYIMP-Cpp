#include <iostream>
using namespace std;

// Base class
class Polygon {
public:
    float width, height;

    void getData() {
        cout << "Enter width: ";
        cin >> width;
        cout << "Enter height: ";
        cin >> height;
    }

    virtual float area() {   // virtual function
        return 0;
    }
};

// Derived class for Rectangle
class Rectangle : public Polygon {
public:
    float area() {
        return width * height;
    }
};

// Derived class for Triangle
class Triangle : public Polygon {
public:
    float area() {
        return 0.5 * width * height;
    }
};

int main() {
    Polygon *p;     // base class pointer
    Rectangle r;
    Triangle t;

    cout << "--- Rectangle ---\n";
    p = &r;
    p->getData();
    cout << "Area of Rectangle = " << p->area() << endl;

    cout << "\n--- Triangle ---\n";
    p = &t;
    p->getData();
    cout << "Area of Triangle = " << p->area() << endl;

    return 0;
}
