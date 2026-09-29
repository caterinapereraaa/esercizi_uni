#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a;
    
    do{
        cout<<"a= ";
        cin>>a;
    }while (a==0);

    int b;

    do{
        cout<<"b= ";
        cin>>b;
    }while (b==0);

    int c;

    do{
        cout<<"c= ";
        cin>>c;
    }while (c==0);
    
    float d=pow(b,2)-4*a*c;
    
    if (d<0){
        cout<<"no solutions"<<endl;
    } else {
        d= sqrt(d); 
    float x1;
    float x2;

    x1=(-b+d)/(2*a);
    x2=(-b-d)/(2*a);

    cout<<"x1= "<<x1<<endl;
    cout<<"x2= "<<x2<<endl;
    }
return 0;

}