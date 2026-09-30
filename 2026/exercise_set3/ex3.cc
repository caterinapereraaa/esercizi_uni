#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    cout<<"Insert a real value for the input a: "<<endl;;
    cin>>a;
    
    cout<<"Insert a real value for the input b: "<<endl;;
    cin>>b;
    
    cout<<"Insert a real value for the input c (whose value has to be greater than b): "<<endl;;
    cin>>c;
    if(cin.fail() || b>c||b==c && a!=b)
    {
        cout<<"Error! Please insert a real value for each input or make sure that the input values respect the instructions\n(e.g. c is greater than b or, if they are equal, make sure that also the input a is equal)"<<endl;
        cin.clear();
        cin.ignore((numeric_limits<streamsize>::max)(), '\n');              //cin.ignore() is useful to discard the remaining invalid characters from the input buffer, preventing them from contaminating subsequent input operations.
    } else if(a>=b && a<=c)
    {
        cout<<"The value of the function f(a,b,c) has value -1"<<endl;
    } else if(a<b)
    {
        cout<<"The value of the function f(a,b,c) has value 1"<<endl;
    } else if (a>c)
    {
        cout<<"The value of the function f(a,b,c) has value 0"<<endl;
    }
}