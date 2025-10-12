#include<iostream>
using namespace std;

class Time{
    private :
        int hour , minute , second;
    public :
        
    void input ()
    {
        cout << "Enter hours: ";
        cin >> hour;
        cout << "Enter minutes: ";
        cin >> minute;
        cout << "Enter seconds: ";
        cin >> second;
    }
    void displayTime() {
        cout << hour << ":" << minute << ":" << second << endl;
    }

    friend Time addtime(Time t1 ,Time t2);
};
    Time addtime( Time t1 , Time t2)
    {
        Time temp;
        temp.second = t1.second + t2.second;
        temp.minute = t1.minute + t2.minute + temp.second /60;
        temp.hour = t1.hour + t2.hour + temp.minute /60;

        temp.second = temp.second %60;
        temp.minute = temp.minute %60;

        return temp;
    }

int main()
{
    Time t1,t2,t3;

    cout<<"-------Time 1---------"<<endl;
    t1.input();

    cout<<"-----------Time 2---------"<<endl;
    t2.input();

    t3 = addtime(t1,t2);

    cout<<"-------------Display----------"<<endl;

    cout<<"Time 1 : ";
    t1.displayTime();

    cout<<"Time 2 : ";
    t2.displayTime();

    cout<<"Sum of time 1 and time 2 ---->  ";
    t3.displayTime();
}