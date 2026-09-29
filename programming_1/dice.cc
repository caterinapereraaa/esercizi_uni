#include <cstdlib>
#include <iostream>
using namespace std;

int ciao(){
    int variable;
    variable=0;
    for(int i=0; i<10; i++){
        int random_number = rand() % 6 + 1;
        if(random_number==1){
            variable=variable+1;
        }
    }
    return variable;
} 

int main()
{
    srand(time(NULL));
    int number;
    cout<<"Guess how many dicies turned out to be one: "<<endl;
    cin>>number;
    int random_number;
    if(number==ciao()){
        cout<<"you win!"<<endl;
    } else cout<<"you lost"<<endl;
    cout<<"the number was: "<<ciao()<<endl;

    return 0;
}