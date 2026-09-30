#include <iostream>
using namespace std;

int main()
{
    char letter;
    cout<<"Insert a letter here and let's see whether it is a vocal or a vowel: "<<endl;
    cin>>letter;
    if (letter<65 ||letter<90 ||letter<97 ||letter>122)
    {
        if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u')
        {
            cout<<"It is a vowel"<<endl;
        } else cout<<"It is a consonant"<<endl;
    
    }else if (cin.fail())
    {
        cout<<"Error: please write just one letter of the alphabet"<<endl;
        cin.clear();
        cin.ignore(100000,'\n');
    }
    return 0;
}