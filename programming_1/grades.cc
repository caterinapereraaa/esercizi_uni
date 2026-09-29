#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int calculate(int (*g)[][5]);
int main(){
    
    int grades;
    int i, j;
    int g[4][5];

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            cout<<"Insert grade: "<<endl;
            cin>>grades;
            while(cin.fail()||grades<18 ||grades>30)
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(),'\n');
                cout<<"(Error) Insert grade: "<<endl;
                cin>>grades;

                
            }
           g[i][j]=grades; 
        }
    }
    calculate(&g);

}



int calculate(int (*g)[][5])
{
    cout<<endl;
    int max=0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max<(*g)[i][j])
            {
                max=(*g)[i][j];
            }
        }
        cout<<"max "<<max<<endl;
        max=0;
        
    }
    cout<<endl;
    int min=0;
    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (min<(*g)[i][j])
                {
                    min=(*g)[i][j];
                }
            }
            cout<<"min "<<min<<endl;
            min=0;
            
        }

    cout<<endl;
    int average=0;
    for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 5; j++)
            {
               average+=(*g)[i][j];
            }
            
            cout<<"average "<<average/5<<endl;
            average=0;
            
        }
    return 0;

}