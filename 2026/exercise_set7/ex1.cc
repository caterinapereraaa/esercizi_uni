#include <iostream>
using namespace std;

bool checkCharacter(char letter);
char convertCharacter(char letter);

int main()
{
    char letter;
    cout<<"Insert a letter here: "<<endl;
    cin>>letter;
    if(letter>=65 && letter <=90 || letter>=97 && letter<=122)
    {
        checkCharacter(letter);
    } else {
        cout<<"You have to insert a letter of the alphabet! Try again later."<<endl;
        cin.clear();
        cin.ignore(10000, '\n');
    }
    if(checkCharacter(letter)==true)
    {
        cout<<"The letter you selected is already in uppercase!"<<endl;
    } else convertCharacter(letter);
    cout<<"The uppercase version of the letter you selected is: "<<convertCharacter(letter)<<endl;
    return 0; 

}

bool checkCharacter(char letter)
{
    
    if(letter>=65 && letter<=90)
    {
        return true;
    } else return false;
}

char convertCharacter(char letter)
{
    char upperletter=letter-32;
    return upperletter;
}