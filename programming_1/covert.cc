#include <iostream>

using namespace std;
int main()

{
    char nletters;
     char lowercase;
    
    do {
        cin>>nletters;
        lowercase=nletters+32;
        //input variabile//
         if ('a'<=nletters &&  nletters<='z'){
        cout<<"lowercase:"<<nletters<<endl;
        }else cout<<"Uppercase to lowercase:"<<lowercase<<endl;
        //if: se la lettera inserita è minuscola, rimane minuscola, else (se è maiuscola) diventa minuscola)//
        
        
       
    }while (nletters!='*');
}


    