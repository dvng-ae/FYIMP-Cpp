#include <iostream>
using namespace std;

class Telephone {
private:
    string name;
    string address;
    long telNo;
    int numCalls;
    float totalAmount;

public:

    void inputData() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Address: ";
        cin >> address;
        cout << "Enter Telephone Number: ";
        cin >> telNo;
        cout << "Enter Number of Calls: ";
        cin >> numCalls;
    }

    // Declare friend function
    friend void calculateBill(Telephone &t);

    void display(){
    cout << "\n----- Telephone Bill -----" << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " <<address << endl;
    cout << "Telephone No.: " << telNo << endl;
    cout << "Number of Calls: " << numCalls << endl;
    cout << "Total Amount to be Paid: Rs. " << totalAmount << endl;
}

};

void calculateBill(Telephone &t) {
    t.totalAmount = t.numCalls * 2.0;  // Rs. 2 per call
}



int main() {
    Telephone user;
    user.inputData();
    calculateBill(user);            // Friend function called
    user.display();

    return 0;
}
