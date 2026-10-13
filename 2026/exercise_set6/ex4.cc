#include <iostream>
#include <cstdlib>
using namespace std;

void declareWinner(double jumper1, double jumper2);
double getJumpHeight();
int main()
{
    srand(time(NULL));
    double jumper1=getJumpHeight();
    double jumper2=getJumpHeight();
    cout<<"Athlete 1 jumped "<<jumper1<<"m"<<endl;
    cout<<"Athlete 2 jumped "<<jumper2<<"m"<<endl;
    declareWinner(jumper1, jumper2);
    return 0;
}

double getJumpHeight()
{
    double Height=(rand()%200)/100.0;
    return Height+1.0;
}

void declareWinner(double jumper1, double jumper2)
{
    if(jumper1>jumper2)
    {
        cout<<"Athlete 1 wins!"<<endl;
    } else if(jumper2>jumper1)
    {
        cout<<"Athlete 2 wins!"<<endl;
    } else if(jumper1==jumper2)
    {
        cout<<"Fair match, same height!"<<endl;
    }

}