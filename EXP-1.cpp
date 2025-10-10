#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    string model;
    int year;

public:
    // Function to read data
    void car() {
        cout << "Enter brand: ";
        cin >> brand;
        cout << "Enter model: ";
        cin >> model;
        cout << "Enter year: ";
        cin >> year;
    }

    // Function to display data
    void display() {
        cout << "\nCar Details:\n";
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    Car car1, car2, car3;

    cout << "--- Enter details of Car 1 ---" << endl;
    car1.car();

    cout << "\n--- Enter details of Car 2 ---" << endl;
    car2.car();

    cout << "\n--- Enter details of Car 3 ---" << endl;
    car3.car();

    cout << "\n===== Displaying Car Details =====" << endl;
    car1.display();
    car2.display();
    car3.display();

    return 0;
}
