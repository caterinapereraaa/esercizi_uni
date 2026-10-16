#include <iostream>
#include <cstdlib>
using namespace std;

void create_dice_roll(int &a);
int main()
{
    srand(time(NULL));
    int guess;
    cout<<"Guess how many dieces turned out to be one: "<<endl;
    cin>>guess;
    if(guess>=0 && guess<=10)
    {
        create_dice_roll(guess);
    } else {
        cout<<"Error: please make a real guess."<<endl;
        cin.clear();
        cin.ignore(100000, '\n');
    }
    return 0;
}

void create_dice_roll(int &a)
{
    int result=0;
    int roll;
    for(int i=0; i<10; i++)
    {
        roll=rand()%6+1;
        if(roll==1)
        {
            result++;
        }
    }
    cout<<"The dices that turned out to be 1 were: "<<result<<endl;
    if(a==result)
    {
        cout<<"You win!"<<endl;
    } else {
        cout<<"You lost..."<<endl;
    }
}