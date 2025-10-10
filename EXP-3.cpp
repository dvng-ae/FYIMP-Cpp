#include<iostream>
using namespace std;

//class
class rectangle {
    private:
    float length;
    float width;

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

        void display()
        {
            cout << "Length: " << length << ", Width: " << width << endl;
        }
            
    //destructor
        ~rectangle()
        {
            cout<<"Destructor called for both rectangle"<<endl;
        }
   
};
int main()
{
    rectangle r1;       // default constructor called

    rectangle r2(40,20);        //parametrized constructor called

    cout<<"Rectangle 1 => ";
    r1.display();

    cout<<"Rectangle 2 => ";
    r2.display();

    //at last destructor called

    cout<<"------Destructor called-------"<<endl;

}