#include <iostream>
using namespace std;


int main()
{
    bool P, Q;
    cout<<"Insert a boolean value for P (1 for true, 0 for false): "<<endl;
    cin>>P;
    cout<<"Insert a boolean value for Q (1 for true, 0 for false): "<<endl;
    cin>>Q;
    
    bool result;
    result=!P||Q;                       //P implies Q->P is false or Q is true
    cout<<"P->Q is "<<result<<endl;
}

/*result is true iff:
P and Q are TRUE=> P=1 && Q=1=>1
P is false and Q is true=>P=0 && Q=1=>1
P and Q are false=>P=0 && Q=0=>1->!P=1 and Q=0->!P||Q=1 (because !P is 1)
!P=0 && Q=1<=>!P=1 && Q=1-> at least 1 is always true so the results are true.
*/