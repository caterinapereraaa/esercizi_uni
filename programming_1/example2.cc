#include <iostream>
using namespace std;

int print_reverse(int n);
int main()
{
    int n;
    cout<<"enter a number: "<<endl;
    cin>>n;
    cout<<print_reverse(n)<<endl;
    
}
int print_reverse(int n)
{
    int reversedn;
    reversedn=0;

    while(n!=0){
    int digit;
    digit=n%10;
    n=n/10;

    reversedn=reversedn*10;
    reversedn=reversedn+digit;
    }
    return reversedn;
}
    

