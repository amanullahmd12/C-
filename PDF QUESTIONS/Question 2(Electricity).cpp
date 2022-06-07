//
//  main.cpp
//  question 2 lab.cpp
//
//  Created by MD AMANULLAH on 23/12/21.
//

#include <iostream>
using namespace std;
string name;
int Unit;
void get_info()
{
    cout<<"Enter NAME of Consumer ";
    getline(cin,name);
    cout<<"Enter the unit consume by the user ";
    cin>>Unit;
}
void Calculation()
{
    int amount;
    
    if(Unit<=100)
    {
        amount=0.6*Unit;
    }
    else if(Unit >100 && Unit<=200)
    {
        amount = 0.6*Unit+0.2*(Unit-100);
    }
    else
    {
        amount = 0.6*Unit+0.2*(Unit-100)+0.1*(Unit-200);
    }
    
    if(amount >= 300 )
    {
    amount=amount+50+(amount*15/100);
    }
    cout<<"Amount of consumed electricity "<<amount<<endl;
}
void display()
{
    get_info();
    cout<<endl;
    cout<<"Coustomer details :"<<endl;
    cout<<"Consumer name : "<<name<<endl;
    Calculation();
    
}
int main()
{
    display();
}
