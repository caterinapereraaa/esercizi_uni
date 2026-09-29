#include <iostream>
using namespace std;
int main ()
{
    float hours;
    float minutes;
    float seconds;
    float seconds_to_midnight;
    //introduce variables//

    /*hours= 3600*seconds;
    minutes=60*seconds*/
    //proportionality between variables

    cin>>hours;
    cout<<"hours= "<<hours<<endl;

    cin>>minutes;
    cout<<"minutes= "<<minutes<<endl;

    cin>>seconds;
    cout<<"seconds= "<<seconds<<endl;
    seconds_to_midnight=3600*hours+60*minutes+seconds;
    cout<<"Seconds to midnight:"<<seconds_to_midnight<<endl;

    return 0;
}