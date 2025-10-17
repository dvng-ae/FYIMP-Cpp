#include <iostream>
#include <string>
using namespace std;

// Base class 1
class OnlineShopping {
protected:
    string item_name;
    int quantity;
    float unit_price;
public:
    void getItemDetails() {
        cout << "Enter item name: ";
        cin >> item_name;
        cout << "Enter quantity: ";
        cin >> quantity;
        cout << "Enter unit price: ";
        cin >> unit_price;
    }
};

// Base class 2
class ShippingDetails {
protected:
    float shipping_charge;
public:
    void getShippingDetails() {
        cout << "Enter shipping charge: ";
        cin >> shipping_charge;
    }
};

// Derived class
class Bill : public OnlineShopping, public ShippingDetails {
public:
    void calculateBill() {
        float total = (quantity * unit_price) + shipping_charge;
        cout << "\n--- BILL DETAILS ---\n";
        cout << "Item Name: " << item_name << endl;
        cout << "Quantity: " << quantity << endl;
        cout << "Unit Price: " << unit_price << endl;
        cout << "Shipping Charge: " << shipping_charge << endl;
        cout << "Total Bill Amount: " << total << endl;
    }
};

int main() {
    Bill b;
    b.getItemDetails();
    b.getShippingDetails();
    b.calculateBill();
    return 0;
}
