#include <iostream>
using namespace std;

class Student {
public:
    int rollno;
    string name;
    float marks[3];
};

int main() {
    int n;

    cout << "Enter the number of students: ";
    cin >> n;

    Student s[n]; // Array to store 'n' students

    for (int i = 0; i < n; i++) 
    {
        float sum = 0, avg = 0;  // Moved outside the inner loop

        cout << "\nEnter details for student " << i + 1 << ":\n";

        cout << "Roll No: ";
        cin >> s[i].rollno;

        cout << "Student Name: ";
        cin >> s[i].name;

        for (int j = 0; j < 3; j++) 
        {
            cout << "Subject " << j + 1 << " mark: ";
            cin >> s[i].marks[j];
            sum += s[i].marks[j];
        }

        avg = sum / 3;

        cout << "Sum = " << sum << endl;
        cout << "Average = " << avg << endl;
    }

    return 0;
}
