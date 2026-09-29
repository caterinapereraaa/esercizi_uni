#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    cout<<"Insert a value for the real number a: ";
    cin>>a;
    cout<<endl;
    cout<<"Insert a value for the real number b: ";
    cin>>b;
    cout<<endl;
    cout<<"Insert a value for the real number c: ";
    cin>>c;
    cout<<endl;
    float delta=(b*b)-(4*a*c);
    if(delta<0)
    {
        cout<<"Delta is negative, so there is no real solution!"<<endl;
        return 0;
    } else if (delta==0)
    {
        b=-b;
        float x=b/(2*a);
        cout<<"The solution is "<<x<<endl;
    } else if(delta>0)
    {
        b=-b;
        float o1=sqrt(delta);
        float x1=(o1+b)/(2*a);
        float x2=(+b-o1)/(2*a);
        cout<<"X1 is equal to "<<x1<<" and X2 is equal to "<<x2<<endl;
    }
    
    return 0;
}