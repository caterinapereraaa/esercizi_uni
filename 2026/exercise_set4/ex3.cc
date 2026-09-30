#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    cout<<"Insert a real number value for variable a: ";
    cin>>a;
    cout<<endl;
    cout<<"Insert a real number value for variable b: ";
    cin>>b;
    cout<<endl;
    float result;

    if(cin.fail())
    {
        cout<<"Error, please insert two real number values."<<endl;
        cin.clear();
        cin.ignore(1000000, '\n');
        return 0;
    }
    if(a>=b)
    {
        result=a-b;
        cout<<"Absolute value of the subtraction: "<<result<<endl;
    } else if (a<b)
    {
        result=-(a-b);
        cout<<"Absolute value of the subtraction: "<<result<<endl;
    }
    return 0;
}