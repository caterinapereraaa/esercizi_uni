#include <iostream>
using namespace std;

int main()
{
    /*and*/
    int a=false;
    int b=false;
    
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"and: "<<(a&&b)<<endl;

    a=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"and: "<<(a&&b)<<endl;

    a=false;
    b=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"and: "<<(a&&b)<<endl;

    a=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"and: "<<(a&&b)<<endl;
    
    /*or*/
    cout<<endl;

    a=false;
    b=false;
    
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"or: "<<(a||b)<<endl;

    a=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"or: "<<(a||b)<<endl;

    a=false;
    b=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"or: "<<(a||b)<<endl;

    a=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"or: "<<(a||b)<<endl;

    /*xor*/
    cout<<endl;
    
    a=false;
    b=false;
    
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"xor: "<<(a^b)<<endl;

    a=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"xor: "<<(a^b)<<endl;

    a=false;
    b=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"xor: "<<(a^b)<<endl;

    a=true;
    cout<<"A: "<<(a)<<"  ";
    cout<<"B: "<<(b)<<"  ";
    cout<<"xor: "<<(a^b)<<endl;

    return 0;
}