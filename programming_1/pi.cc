#include <iostream>
#include <cmath>

using namespace std;

double sum(long);
double piSum(double);

int main()
{
    //prima parte
    cout<<"enter a value N: ";
    int N;
    cin>>N;
    double result= sum(N);
    cout<<"result: "<<result<<endl;
    
    //seconda parte
    long long int Nu=1000000000;
    double somma = sum(Nu);
    cout << somma<<endl;
    double pimain = piSum(somma);
    cout<<"value of pi: "<<pimain<<endl;
}

double sum(long N)
{
    double Sum=0;
    for(long int i=1; i<=N; i++){
        Sum+=(double) 1/(i*i);

    }

    return Sum;    
}

double piSum(double Sum)
{
   
    double pi;
    
    /*(pi*pi)/6=(double) 1/(i*i);*/
    pi=sqrt (Sum*6);

    return pi;
}
