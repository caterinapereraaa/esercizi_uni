#include <iostream>
#include <limits>
using namespace std;

int main()
{
    int n;
    cout<<"Insert the n value for which you want to expand the fibonacci sequence: ";
    cin>>n;
    cout<<endl;
    if (cin.fail())
    {
        cout<<"Error, please insert an integer!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    cout<<"Fibonacci sequence for "<<n<<" times here: "<<endl;
    int result=1;
    int t1=0;
    int t2=1;
    cout<<t1<<" ";
    cout<<t2<<" ";
    for(int i=2; i<n;i++)
    {
        result=t1+t2;           //result is the sum between t-1 and t-2
        t1=t2;                  //t-1 becomes t-2 as the new t-1 is now the result and we have to compute the next term considering it as a term
        t2=result;
        cout<<result<<" ";
    }
    cout<<endl;
    return 0;
}
