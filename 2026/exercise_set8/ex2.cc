#include <iostream>
using namespace std;

bool checkCharacter(char letter);
char convertCharacter(char &uppercase);

int main()
{
    char letter;
    cout<<"Insert a letter here: "<<endl;
    cin>>letter;
    if(letter<'A' ||letter>'Z' && letter<'a' ||letter>'z')
    {
        cout<<"Error: Please try again."<<endl;
        cin.clear();
        cin.ignore(100000, '\n');
    } else {
        checkCharacter(letter);
        if(checkCharacter(letter)==false)
        {
            cout<<"The uppercase version of the letter you entered is: "<<convertCharacter(letter)<<endl;
        } else cout<<"The letter you inserted is already uppercase."<<endl;
    }
    return 0;
}

bool checkCharacter(char letter)
{
    if (letter>='a' && letter<='z')
    {
        return false;
    } else return true;
}

char convertCharacter(char &uppercase)
{
    uppercase=uppercase-32;
    return uppercase;
}

