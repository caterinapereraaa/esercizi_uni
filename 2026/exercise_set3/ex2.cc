#include <iostream>
#include <cmath>
using namespace std;

int main(){
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
    if(cin.fail())      {           //don't have to say whether a condition cin is satisfied or not, the compiler understand by the type of variable->e.g. if char knows it is a letter etc
        cout<<"Error: please insert real numbers!"<<endl;
        cin.clear();
    }    
    else if(a<b && a<c)
    {
        cout<<"The number "<<a<<" is the minimum among these three numbers."<<endl;
    } else if(b<a && b<c)
    {
        cout<<"The number "<<b<<" is the minimum among these three numbers."<<endl;
    } else if(c<b && c<a)
    {
        cout<<"The number "<<c<<" is the minimum among these three numbers."<<endl;
    } else if (a==b && a<c)
    {
        cout<<"The numbers "<<a<<"and "<<b<<"are minimums among these three numbers, as they are equal." <<endl;
    }else if (c==b && c<a)
    {
        cout<<"The numbers "<<b<<"and "<<c<<"are minimums among these three numbers, as they are equal." <<endl;
    } else if (a==c && a<b)
    {
        cout<<"The numbers "<<b<<"and "<<c<<"are minimums among these three numbers, as they are equal." <<endl;
    } else if (a==b && b==c)
    {
        cout<<"There isn't a real minimum between these 3 inputs as they are equal!"<<endl;
    }
    return 0;
}