#include <iostream>
using namespace std;

class Animal{
    public:

    void display(){
        
        cout<<"Animal speaks"<<endl;
    }
};
class Dog: public Animal{
    public:

    void display(){

        cout<<"Dog barks"<<endl;
    }
};
int main()
{
    Dog d;
    d.display(); 
    d.Animal::display();
    return 0;
}