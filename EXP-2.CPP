#include<iostream>
using namespace std;

class book
{
private:
    int book_id;
    string book_name;
    float book_price;
public:
     void input()
     {
        cout << "Enter Book ID: ";
        cin >> book_id;
        cout << "Enter Book Name: ";
        cin >> book_name;
        cout << "Enter Book Price: ";
        cin >> book_price;
     }
     void display()
     {
        cout << "\nBook ID: " << book_id << endl;
        cout << "Book Name: " << book_name << endl;
        cout << "Book Price: " << book_price << endl;
     }
     void price(int n)
     {
        float cost = book_price * n;
        cout<<"Total cost: "<<cost<<endl;
     }
};

int main()
{
    int n1, n2, n3;
    book b1, b2, b3;

    cout<<"Enter details of book 1\n";
    b1.input();
    cout<<"Enter number of copies: ";
    cin>>n1;

    cout<<"\nEnter details of book 2\n";
    b2.input();
    cout<<"Enter number of copies: ";
    cin>>n2;

    cout<<"\nEnter details of book 3\n";
    b3.input();
    cout<<"Enter number of copies: ";
    cin>>n3;

    cout << "\nBook 1 Details:";
    b1.display();
    b1.price(n1);

    cout << "\nBook 2 Details:";
    b2.display();
    b2.price(n2);

    cout << "\nBook 3 Details:";
    b3.display();
    b3.price(n3);

    return 0;
}
