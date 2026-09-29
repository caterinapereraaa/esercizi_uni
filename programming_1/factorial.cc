#include <iostream>
using namespace std;

int factorial(int n);
int main()
{
    int n;
    cout<<"insert a positive value: "<<endl;
    cin>>n;
    int factorial(int);
    cout<<"factorial of the value you have just typed: "<<factorial(n)<<endl;
    return 0;
}

int factorial(int n)
{
    if(n!=1){
        n=n*factorial(n-1);
        return n;
    }
    return n;
}