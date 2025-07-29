#include <iostream>
using namespace std;

class student{
    public:
    {
        int rollno;
        char student;
        int subject;
        float mark;
    }
};
int main()
{
    int i,n,sub;
    student s1;
    cout<<"Enter the number of student";
    cin>>n;
    for(i=1;i<=n;i++)
    {
    cout<<"Roll No:";
    cin>>s1.rollno;
    cout<<"Student Name";
    cin>>s1.student;
    for(i=1;i<=3;i++)
        {
            cout<<"Subject "<< i << "mark" <<" = ";
            cin>>sub;
        }
    }
}
