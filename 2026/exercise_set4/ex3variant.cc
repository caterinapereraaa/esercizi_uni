//same request as the ex 3 but can't use condition stament
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
    float diff;
    int sign;
    diff=a-b;
    sign=1-2*(diff<0);
    result=diff*sign;
    cout<<"Absolute value of the subtraction: "<<result<<endl;
    return 0;
}