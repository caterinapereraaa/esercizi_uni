#include <iostream>
using namespace std;

int main()
{
    float r;
    cout<<"Insert a radius of distance"<<endl;
    cin>>r;
    float pi=3.1415;
    float C=2*pi*r;
    float A=pi*(r*r);
    if(!cin.fail())
    {
        cout<<"The circumference is: "<<C<<endl;
        cout<<"The area is: "<<A<<endl;
    } else 
    cout<<"Error: please insert an integer"<<endl;
    return 0;
}