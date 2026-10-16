/*#include <iostream>
using namespace std;

double division(int a, int b, double &rest, double quotient);
int main()
{
    int a;
    cout<<"Insert the value of the integer a: "<<endl;
    cin>>a;
    if (cin.fail())
    {
        cout<<"Error: please try again."<<endl;
        cin.clear();
        cin.ignore(100000, '\n');
    } else{
        int b;
        cout<<"Insert the value of the integer b: "<<endl;
        cin>>b; 
        if (cin.fail())
        {
            cout<<"Error: please try again."<<endl;
            cin.clear();
            cin.ignore(100000, '\n');
        } else {
            double rest;
            double quotient=division(a,b, rest, quotient);
            cout<<"The division between a and b is: "<<quotient<<endl;
        }
    }
    return 0;
    
}
double division(int a, int b,double & rest, double quotient)
{
    quotient=0;
    while(a>b)
    {
        quotient++;
        a-=b;
    }
    rest=a;
    return quotient;
}*/