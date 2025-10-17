#include <iostream>
using namespace std;

// Base class
class Person {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
public:
    int roll_number;

    void showDetails() {
        display(); // Call base class function
        cout << "Roll Number: " << roll_number << endl;
    }
};

int main() {
    Student s;

    // Input from user
    cout << "Enter name: ";
    getline(cin, s.name);

    cout << "Enter age: ";
    cin >> s.age;

    cout << "Enter roll number: ";
    cin >> s.roll_number;

    // Output
    cout << "\nStudent Details:\n";
    s.showDetails();

    return 0;
}
