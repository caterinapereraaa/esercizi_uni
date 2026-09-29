#include <iostream>
#include <cstdlib>
using namespace std;

int attack();
int defend();

int main()
{
    srand(time(NULL)); //seed value
    int n1=attack();
    int n2=defend();
    
    if(n1>n2){
        cout<<"stiker won!"<<endl;

    }else if (n1==n2){
        cout<<"fair match, try again!"<<endl;
    }
    else cout<<"defender won!"<<endl;
    cout<<"the number of the striker was: "<<n1<<endl;
    cout<<"the number of the defender was: "<<n2<<endl;

}

int attack()
{
int random_number1 = rand() % 6 + 1;
return random_number1;
}

int defend()
{
int random_number2 = rand() % 6 + 1;
return random_number2;
}
