#include <iostream>
#include <cstdlib>
using namespace std;

void create_dice_roll(int dices, int guess);
int main()
{
    srand(time(NULL));
    int dices=10;
    int guess;
    cout<<"How many diecies from 0 to 10 do you think that turn out to be 1? "<<endl;
    cin>>guess;
    if(guess>=0 && guess<=10)
    {
        create_dice_roll(dices, guess);
    } else {
        cout<<"Please make a real guess."<<endl;
        cin.clear();
        cin.ignore();
    }
    return 0;
}

void create_dice_roll(int dices, int guess)
{
    int result=0;
    for(int i=0; i<10; i++)
    {
        dices=rand()%6+1;
        if (dices==1)
        {
            result++;
        }
    }
    cout<<"The number of dices that turned out to be 1 after 10 rolls is: "<<result<<endl;
    if(result==guess)
    {
        cout<<"You won!"<<endl;
    } else cout<<"You lost:("<<endl;
}