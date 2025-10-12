#include<iostream>
using namespace std;
class Matrix
{
private:
   int data[2][2];
public:
    void input()
    {
        cout<<"Enter the numbers (2 x 2) :"<<endl;
        for (int i = 0; i < 2; i++)
            for (int j = 0; j < 2; j++)
            {
                cin>>data[i][j];
            }
    }
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout<<data[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    //overator oveloading

    Matrix operator+(const Matrix &m)
    {
        Matrix result;
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                result.data[i][j]= data[i][j] + m.data[i][j];
            }
        }
        return result;
    }
};

int main()
{
    Matrix A , B , C;

    cout<<"Input A"<<endl;
    A.input();

    cout<<"Input B"<<endl;
    B.input();

    C = A + B;
    
    cout<<"Matrix A + Matrix B = "<<endl;
    C.display();

    return 0;
}