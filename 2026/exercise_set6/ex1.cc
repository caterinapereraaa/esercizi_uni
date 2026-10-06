#include <iostream>
#include <limits>
using namespace std;

int main()
{
    float smartphone_sales;
    cout << "Enter smartphone sales: €";
    cin >> smartphone_sales;

    if(cin.fail())
    {
        cout<<"Error, please report real numerical values!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    float commission_phone;
    if(smartphone_sales>=5000)
    {
        commission_phone=smartphone_sales*0.10;
    } else commission_phone=smartphone_sales*0.05;
    cout<<"Commision for smartphones sales: "<<commission_phone<<endl;

    float laptop_sales;
    cout << "Enter laptop sales: €";
    cin >> laptop_sales;

    if(cin.fail())
    {
        cout<<"Error, please report real numerical values!"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    float commission_laptop;
    if(laptop_sales>=5000)
    {
        commission_laptop=laptop_sales*0.10;
    } else commission_laptop=laptop_sales*0.05;
    cout<<"Commision for laptops sales: "<<commission_laptop<<endl;

    float total_sales=smartphone_sales+laptop_sales;
    cout<<"Total sales: "<<total_sales<<endl;
    float additional_bonus;
    if(total_sales>=50000)                                          //do not use the comma(,)!
    {
        additional_bonus=total_sales*0.12;
    } else additional_bonus=0;
    cout<<"Additional bonus for sales: "<<additional_bonus<<endl;
}