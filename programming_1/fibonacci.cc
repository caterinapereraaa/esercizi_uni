#include <iostream>
using namespace std;

int fibo(int, int);

int main()
{
    int n;
    cout<<"how many? "<<endl;
    cin>>n;
    int fibo(int n, int x);
    cout<<" "<<fibo<<endl;


}

int fibo(int n, int x)
{
    
   if (n>=2){
        int x=n+fibo(n-1, x);
        return x;
    }
}