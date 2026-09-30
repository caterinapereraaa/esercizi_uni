#include <iostream>
using namespace std;

int main()
{
    bool P, Q;
    cout<<"Insert a boolean value for P (1 for true, 0 for false): "<<endl;
    cin>>P;
    cout<<"Insert a boolean value for Q (1 for true, 0 for false): "<<endl;
    cin>>Q;
    
    if (cin.fail())
    {
        cout<<"Error: please insert 1 for true and 0 for false."<<endl;
        cin.clear();
        cin.ignore(100000, '\n');
        return 0;
    }

    if(P==true && Q==true)
    {
        cout<<"P->Q is true"<<endl;
    } else if(P==true && Q==false)
    {
        cout<<"P->Q is false"<<endl;
    } else if(P==true && Q==false)
    {
        cout<<"P->Q is true"<<endl;
    } else if(Q==false && P==false)
    {
        cout<<"P->Q is true"<<endl;
    }
}