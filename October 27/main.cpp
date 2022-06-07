//
//  main.cpp
//  27 oct.cpp
//
//  Created by MD AMANULLAH on 27/12/21.
//

#include <iostream>
using namespace std;

class bank
{
    string name ;
    double account_no ;
    string type;
    int balance;
    int amount=0;
    
public:
    void set_details();
    void deposit();
    void withdrawl();
    void net_amount();
    
};
void bank :: set_details()
{
    cout<<"Account Details : "<<endl;
    
    cout<<"Enter youe name : "<<endl ;
    getline(cin,name);
    cout<<"Enter Account Number : "<<endl;
    cin>>account_no;
    cout<<"Enter account type : (Saving / Current)"<<endl;
    cin>>type;
    cout<<"Enter your Balance : "<<endl;
    cin>>balance;
}

void bank:: deposit()
{

    amount = amount +balance;
    cout<<"Account Balance : "<<amount<<endl;
}
void bank :: withdrawl()
{
    cout<<"Enter amount Wihdrawl:"<<endl;
    cin>>amount;
}
void bank :: net_amount()
{
  int  total_amount;
    total_amount=balance-amount;
    cout<<"Coustomer details : \n";
    cout<<"Account Holder name "<<name<<endl;
    cout<<"Account balance : "<<total_amount<<endl;
    
}

int main()
{
    bank obj;
   obj. set_details();
    obj.deposit();
   obj. withdrawl();
   obj. net_amount();
    
}
