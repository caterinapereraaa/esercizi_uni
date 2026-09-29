#include <iostream>

using namespace std;

int check(int v[], int dim);
int main()
{
    int dim=4;
    cout<<"write down 4 integers "<<endl;
    int v[dim];
    cin>>v[0];
    cin>>v[1];
    cin>>v[2];
    cin>>v[3];
    
    if(check(v,dim)==1){
        cout<<"the vector is palindrome!"<<endl;
    } else cout<<"the vector isn't palindrome"<<endl;


}

int check(int v[], int dim)
{
    for(int i=0; i<dim; i++)
    {
        if(v[0]==v[3] && v[1]==v[2]){
            return 1;
        }  else return 0;
    }
    return 0;
}