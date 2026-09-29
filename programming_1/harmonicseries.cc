#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float series(float, float);
int main()
{
    int N;
    cout<<"insert a N value: "<<endl;
    cin>>N;
    while(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"insert a N value: "<<endl;
        cin>>N;
    }
    
    int i=1;
    cout<<series(i, N)<<endl;
}
 
float series(float i, float N)
{
    if(i==N){
        return 1/i;
    }else{
        return 1/i+series(++i, N);
    }
}