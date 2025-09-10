#include <iostream>
using namespace std;

class Animal{
    public:
    string bread;
    void speak(){
        bread="Pomarian";
        cout<<"Animal speaks"<<endl;
    }
};
class Dog: public Animal{
    public:
    string an;
    void bark(){
        an="Dog";
        cout<<"Dog barks"<<endl;
    }
};
int main()
{
    Dog d;
    d.speak(); // Inherited from Animal class
    d.bark();  // Dog class method
    cout<< d.bread + " " + d.an<<endl;
    return 0;
}