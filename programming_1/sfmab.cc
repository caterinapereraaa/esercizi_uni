#include <iostream>

using namespace std;
int main()
{
    int hours;
    int minutes;
    int seconds;

    int imp;
    cout<<"inserire secondi"<<endl;
    cin>>imp;
    hours=imp/3600;
    int resto;
    resto=imp%3600;
    minutes=resto/60;
    int resto2;
    resto2=resto%60;
    seconds=resto2;
    cout<<"Hours: "<<hours<<endl;
    cout<<"Minutes: "<<minutes<<endl;
    cout<<"Seconds: "<<seconds<<endl;
}