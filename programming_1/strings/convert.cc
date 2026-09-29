#include <iostream>
using namespace std;

int main()
{
    char c[30];
    cin>>c;
    int i=0;
    while(c[i]!='\0')
    {
        if(c[i]>='a' && c[i]<='z')
        {
            c[i]=c[i]-'a'+'A';
            
        } else if(c[i]>='A' && c[i]<='Z')
        {
            c[i]=c[i]-'A'+'a';
        }
        i++;
    }
    cout<<c<<endl;
}