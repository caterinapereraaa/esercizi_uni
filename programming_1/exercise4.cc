#include <iostream>
using namespace std;

int main()
{
    char nletters;
    char nletters1;

    cout<<"write down a character: "<<endl;
    cin>>nletters;

    nletters1=nletters-32;
    cout<<nletters1<<endl;

    cout<<"write down a character: "<<endl;
    cin>>nletters1;

    nletters=nletters1-10;
    cout<<nletters<<endl;

    return 0;
}