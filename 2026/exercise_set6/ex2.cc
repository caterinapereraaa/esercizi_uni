#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL));
    int goalsxmatch=0;
    int sum=0;
    double mean=0.0;
    int max=-1;
    for(int i=1; i<11; i++)
    {
        goalsxmatch=rand()%4;
        cout<<"Goal(s) made on match number "<<i<<": "<<goalsxmatch<<endl;
        sum=goalsxmatch+sum;
        mean=sum/10.0;
        if (goalsxmatch>max)
        {
            max=goalsxmatch;
        }
    }
    cout<<"Goals made the last 10 matches: "<<sum<<endl;
    cout<<"Average number of goals per match: "<<mean<<endl;
    cout<<"The maximum goals in a single match were: "<<max<<endl;

}