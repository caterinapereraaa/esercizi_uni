#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int goalsxmatch=0;
    int sum=0;
    for(int i=1; i<11; i++)
    {
        goalsxmatch=rand()%4;
        cout<<"Goal(s) made on match number "<<i<<": "<<goalsxmatch<<endl;
        sum=goalsxmatch+sum;
    }
    cout<<"Goals made the last 10 matches: "<<sum<<endl;

}