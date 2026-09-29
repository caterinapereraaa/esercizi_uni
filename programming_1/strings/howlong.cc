#include <iostream>
using namespace std;

int main()
{
    char c[30];
    char d[30];
    cout<<"stringa 1: "<<endl;
    cin>>c;
    cout<<"stringa 2: "<<endl;
    cin>>d;
    int i=0, j=0;

    while(c[i]!='\0' && d[j]!='\0')
    {
        
        if(c[i]<d[j]){
            cout<<"la prima stringa è più piccola della seconda"<<endl;
            return 0;
        } else if(c[i]>d[j])
        {
            cout<<"la seconda stringa è più piccola della prima"<<endl;
            return 0;
        } 
        i++;
        j++; 
    }
    if (c[i] == '\0' && d[j] != '\0') {
        cout << "la prima stringa è più piccola della seconda" << endl;
    }
    else if (d[j] == '\0' && c[i] != '\0') {
        cout << "la seconda stringa è più piccola della prima" << endl;
    }
    else {
        cout << "le stringhe sono uguali" << endl;
    }

    return 0;
    
}