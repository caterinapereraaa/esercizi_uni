#include <iostream>
using namespace std;

int main()
{
    cout.precision(5);
    float P;
    cout<<"P= ";
    cin>>P;
    /*P is price*/
    float I;
    cout<<"I= ";
    cin>>I;
    /*I is vat*/
    float P1;
    /*price of a product*/

    P1=P+((P*I)/100);
    cout<<"P1= "<<P1<<endl;
    return 0;
}