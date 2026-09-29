#include <iostream>
using namespace std;

int main()
{

    int k, j;
    cout<<"insert values "<<endl;
    cin>>k;
    cin>>j;

    int g[k][j];
    cout<<"insert values for coefficients "<<endl;
    for (int i=0; i<k; i++)
    {
        for(int l=0;l<j; l++){
            cin>>g[i][l];
        }
    }

    cout<<"matrix: ";
    cout<<endl;
    for (int i=0; i<k; i++)
    {
        for(int l=0;l<j; l++){
            
            cout<<g[i][l]<<" ";
        }cout<<endl;
    }
    
}