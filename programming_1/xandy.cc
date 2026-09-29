#include <iostream>
using namespace std;

int sum(int x,int y);
int main()
{
    int x, y;
    cout<<"insert a value x: "<<endl;
    cin>>x;
    cout<<"insert a value y: "<<endl;
    cin>>y;
    cout<<" "<<sum(x,y)<<endl;
}

int sum(int x, int y)
{
    if (y!=0){
        return sum(x+1,y-1);
    }
    return x;
}
