#include <iostream>
#include <cstdlib>
using namespace std;

double declareWinner(double jumper1, double jumper2);
double getJumpHeight(double jumper1, double jumper2);
int main()
{
    double jumper1;
    double jumper2;
    getJumpHeight(jumper1, &jumper2);
    

    cout<<"Athlete 1 jumped "<<jumper1<<"m"<<endl;
    cout<<"Athlete 2 jumped "<<jumper2<<"m"<<endl;
    
    return 0;
}

double getJumpHeight(double &p1Height, double &p2Height)
{
    srand(time(NULL));
    *p1Height=rand()%3+1.0;
    *p2Height=rand()%3+1.0;
    return *p1Height;
    return *p2Height;
}

/*double declareWinner(double jumper1, double jumper2)
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
}*/