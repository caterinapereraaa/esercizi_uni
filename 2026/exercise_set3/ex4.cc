#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    enum day{monday, tuesday, wednesday, thursday, friday, saturday, sunday};
    int to;
    day today;
    cout<<"Insert what number of the week is today: "<<endl;
    cin>>to;
    
    switch(to)
    {
        case 0:
        {   cout<<"Invalid date, please choose a number from 1 to 7"<<endl;
            cin.clear();
            cin.ignore((numeric_limits<streamsize>::max)(),'\n');
        }
        case 1:  
            cout<<"Today is monday, have a great day!"<<endl;
            break;
        case 2:  
            cout<<"Today is tuesday, have a great day!"<<endl;
            break;
        case 3:  
            cout<<"Today is wednesday, have a great day!"<<endl;
            break;
        case 4:  
            cout<<"Today is thursday, have a great day!"<<endl;
            break;
        case 5:  
            cout<<"Today is friday, have a great day!"<<endl;
            break;
        case 6:  
            cout<<"Today is saturday, have a great day!"<<endl;
            break;
        case 7:  
            cout<<"Today is sunday, have a great day!"<<endl;
            break;
        default:
        cout<<"Invalid date-- please insert numbers from 1 to 7"<<endl;  
        break;
    }
    cout<<"GODO FUNZIONA FOTTETEVI BRUTTI COGLIONI CHE NON CREDEVANO NELLA MIA SAPIENZA"<<endl;
    return 0;
}
    
    
