#include<iostream>
using namespace std;

//class
class rectangle {

    //normal constructor
    public:
         rectangle()
    {
        cout<<" default constructor called"<<endl;
        length = 0;
        width = 0;
    }

    // parametrised constructor
    
        rectangle(int l, int w)
        {
            cout<<" parametrized constructor called"<<endl;
            length = l;
            width = w;
        }

    //destructor
        ~rectangle()
        {
            cout<<"Destructor called"<<endl;
        }
   //data member
    public:
        double length, width;

    //function    
       double getArea(){
        return length*width;
       } 
};
int main()
{
    rectangle r1(20,20);
    double area1  = r1.getArea();
    cout << "Area 1= "<<area1<<endl;

    rectangle r2;
    double area2 = r2.getArea();
    cout << "Area 2= "<<area2<<endl;
}