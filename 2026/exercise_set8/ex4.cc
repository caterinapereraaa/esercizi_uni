#include <iostream>
using namespace std;

void swap(double *x, double *y);
int main()
{
    double a;
    cout<<"Insert a value for the first number: "<<endl;
    cin>>a;
    if(cin.fail())
    {
        cout<<"Error: please try again."<<endl;
        cin.clear();
        cin.ignore(1000000, '\n');
    } else
    {
        double b;
        cout<<"Insert a value for the second number: "<<endl;
        cin>>b;
        if(cin.fail())
        {
            cout<<"Error: please try again."<<endl;
            cin.clear();
            cin.ignore(1000000, '\n');
        } else {
            swap(&a, &b);
        }
    }
    
    return 0;
}

void swap(double *x, double *y)
{
    double c=*x;
    *x=*y;
    cout<<"The first number is now: "<<*x<<endl;
    *y=c;
    cout<<"And so the second number is: "<<*y<<endl;
}