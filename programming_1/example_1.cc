#include <iostream>
using namespace std;

bool custom(char);
void convert(char& nletters);


int main()
{
    char nletters;
    cout<<"write down a character: "<<endl;
    cin>>nletters;

    bool res = custom(nletters);
    if(res==true){
    
        convert(nletters);
        cout<<""<<nletters<<endl;
        
    }


}

bool custom(char nletters)
{
    bool result;
    
    if(nletters>='a' && nletters<='z'){
       result=true;
    
    } else result=false;
   
    return result;
    
}

void convert(char& nletters)
{
    nletters=nletters-32;
    
}