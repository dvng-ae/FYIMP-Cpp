#include <iostream>
using namespace std;


class Person {
    public:
        string name;
        int age;

        void display() {
            cout << "Enter name of the student: ";
            cin >> name;
            cout << "Enter age of the student: ";
            cin >> age;
        }
};


class Student : public Person {
    public:
        int roll_number;

        void showDetails() {
            cout << "Enter roll number of the student: ";
            cin >> roll_number;

            // Display 
            cout << "\n--- Student Details ---" << endl;
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
            cout << "Roll Number: " << roll_number << endl;
        }
};

int main() {
    Student s;
    s.display();       
    s.showDetails();   

    return 0;
}
