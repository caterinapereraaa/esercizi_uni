#include <iostream>
using namespace std;

int main()
{

    char secret_letter;

    char commands;
    cout<<"Good evening sir, here is the menu:\n-Write '@' if you want to write a secret letter\n-Write '?' if you want to get instruction on what to do (e.g. came back to the menu)\n-Write '!' if you want to exit"<<endl;
    cin>>commands;
    switch(commands)
    {
        case '@': 
        char letter;
        cout<<"PLease insert an uppercase or lowercase letter: "<<endl;
        cin>>letter;

        int number;
        cout<<"Of how many spaces do you want to shift the character? "<<endl;
        cin>>number;
        if (cin.fail())
        {
            cout<<"Please insert a real integer! "<<endl;
            cin.clear();
            cin.ignore(100000, '\n');
        }
        
        if(letter=='z' || letter=='Z')
        {
            letter=(letter-26)+number;
        } else
        secret_letter=letter+number;
        cout<<"Password: "<<secret_letter<<endl;
        
        case '?': 
        cout<<"Good evening sir, here is the menu:\n-Write '@' if you want to write a secret letter\n-Write '?' if you want to get instruction on what to do (e.g. came back to the menu)\n-Write '!' if you want to exit"<<endl;
        cin>>commands;

        case '!':
        cout<<"Bye"<<endl;
        return 0;

        default:
        cout<<"The option you selected isn't valid, please come back later."<<endl;
        cin.clear();
        cin.ignore(1000000,'\n');
        return 0;

    }

    return 0;
    
    
    
}

