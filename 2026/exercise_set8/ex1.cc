#include <iostream>
#include <cmath>
using namespace std;

double sum(int n,double term);
int main()
{
    int n;
    cout<<"We will approximate the pi series for N terms: please insert the value for N: "<<endl;
    cin>>n;
    double term=0.0;
    if(cin.fail())
    {
        cout<<"Error: please try again"<<endl;
        cin.clear();
        cin.ignore(100000000000, '\n');
    } else{
        sum(n, term);
        double pi=sqrt(6*sum(n,term));
        cout<<"Your approximation of pi following the number of terms you choose is: "<<pi<<endl;
    }
    return 0;
}

double sum(int n,double term)
{
    double sum=0;
    for(int i=1; i<=n; i++)
    {
        term=1.0/(i*i);
        sum=sum+term;
    }
    return sum;
}