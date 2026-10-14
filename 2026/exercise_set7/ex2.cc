#include <iostream>
using namespace std;

void checkandconvert(char letter);
int main()
{
    char letter;
    cout<<"Write a letter on the alphabet here: "<<endl;
    cin>>letter;
    if(letter>=65 && letter<=90 || letter>=97 && letter<=122)
    {
        checkandconvert(letter);
    } else {
        cout<<"Error: Please try again."<<endl;
        cin.clear();
        cin.ignore(100000, '\n');
    }
    return 0;
}

void checkandconvert(char letter)
{
    bool lowercase=false;
    if(letter>=97 && letter<=122)
    {
        lowercase=true;                                                                 //using a procedure means that the function prints itself, otherwise the function has to return sth in order to print the value in the main
    } else lowercase=false;
    if (lowercase==true)
    {
        letter=letter-32;
    }
    cout<<"The uppercase version of the letter you just inserted is: "<<letter<<endl;
}