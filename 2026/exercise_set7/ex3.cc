#include <iostream>
using namespace std;

void printReverse(int number);
int main()
{
    int number;
    cout<<"Please insert the number: "<<endl;
    cin>>number;
    if(cin.fail())
    {
        cout<<"Error: please try again."<<endl;
        cin.clear();
        cin.ignore(100000, '\n');
    } else{
        cout<<"Your sequence reversed: "<<endl;
        printReverse(number);
        
    }
    return 0;
}

void printReverse(int number)
{
    int reversed;
    while(number!=0)
    {
        reversed=number%10;
        cout<<reversed;
        number=number/10;
    }
    cout<<endl;
}