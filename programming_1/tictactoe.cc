#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void board();
int main()
{
    
    cout<<"insert X or O"<<endl;
    
        while (cin.fail()||t[i][l]!='O' && t[i][l]!='X')
        { 
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            cout<<"(Error) Insert a number between 0 and 1: "<<endl;
            cin>>t[i][l];
        }
        if(t[i][l]=='X')  
            {
                cout<<"where do you want to put O"<<endl;
                
            for (i=0; i<3; i++)
            {
                for (l=0; l<3; l++)
                {
                    cin>>t[i][l];
                
                } 
            }
            }else if (t[i][l]=='O')
            {
                cout<<"where do you want to put O"<<endl;
                
            for (int i=0; i<3; i++)
            {
                for (int l=0; l<3; l++)
                {
                cin>>t[i][l];
            }  
        }
    }

    cout<<endl;
    for (int i=0; i<3; i++)
    {
        for (int l=0; l<3; l++)
        {
            cout<<t[3][3];
        }
        cout<<endl;
    }
}

void board()
{
    
    for (int i = 0; i < 3; i++) {
        for (int l = 0; l < 3; l++) {
            cout << t[i][l];
            if (l < 2) cout << " | ";
        }
    }
        cout << endl;
        if (i < 2) cout << "---------" << endl;
}

