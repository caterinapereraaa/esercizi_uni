#include <iostream>
using namespace std;

int main()
{
    int binary;
    cout<<"Insert a binary sequence here and I will give back its equivalent in decimal base: "<<endl;
    cin>>binary;
    if (cin.fail())
    {
        cout<<"Error: please insert only a sequence of binary numbers."<<endl;
        cin.clear();
        cin.ignore(100000000, '\n');
    }
    bool check=true;
    int digit;
    int num_term=1;
    int term;
    int sum=0;
    while(binary!=0 && check==true)
    {
        digit=binary%10;
        binary=binary/10;
        if(digit!=0 && digit!=1)
        {
            check=false;                                    //if check becomes false the condition does not persist and the cycle stops
        }
        digit=binary%10;
        binary=binary/10; 
        num_term=num_term*2;
        term=digit*num_term;
       
        sum=term+sum;
        
    }
    cout<<"Your number in decimal base is: "<<sum<<endl;
    return 0;

}