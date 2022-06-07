//
//  main.cpp
//  EXEPTION HANDLING 22 DEC.CPP
//
//  Created by MD AMANULLAH on 26/12/21.
//
//Implementing Bank Program Using Exception Handling
#include <iostream>
using namespace std;
class bank{
string name;
int ac_no;
string type;
int balance;
public:
    bank()
    {
        cout<<"Bank account successfully created"<<endl;
    }
    void set_values();
    void deposit();
    void withdraw();
    void display();
};

void bank::set_values()
{
    string n;
    cout<<"ENTER NAME"<<endl;
    cin.ignore();
    getline(cin,n);
    //Use sizefo(entered name) sizeof(int) here.to check if user entered stinrg or int
    name=n;
    int an;
    try{

        cout<<"Enter account no."<<endl;
        cin>>an;
        throw(an);
    }
    catch(...){
        cout<<"ENTERD A STRING"<<endl;
        }
    ac_no=an;
    string t;
    cout<<"ENTER account type:-  savings or current"<<endl;
    cin>>t;
    type=t;
    try{
    int bal;
    cout<<"ENTER BALANCE in your bank account"<<endl;
    cin>>bal;
    if(bal<0)throw(bal);
    else balance=bal;
    }
    catch(int a){
    cout<<"Balance Entered is Negative, Kindly Enter Valid Balance "<<endl;
    }

}

void bank::deposit()
{
    cout<<"ENTER Amount to deposit"<<endl;
    int amount;
    cin>>amount;
    balance+=amount;
    cout<<"Total balance after depositing is-: "<<balance<<endl;
}

void bank::withdraw()
{
    try{
    cout<<"ENTER Amount to Withdraw"<<endl;
    int amount;cin>>amount;
    if(amount>balance){
        //throw(balance);
        throw("Insufficient Funds");
    }
    else{
        cout<<"Balance after withdrawing is: "<<balance<<endl;
        }
    }

    catch(string p){
    cout<<p<<endl;
    }
    /*
    catch(int e){
        cout<<"Insufficient Funds"<<endl;
    }
    */
}

void bank::display()
{
    cout<<name<<endl;
    cout<<"ACCOUNT BALANCE IS: "<<balance<<endl;
}

int main()
{

    bank b;
    b.set_values();
    b.deposit();
    b.withdraw();
    b.display();

    return 0;
}
