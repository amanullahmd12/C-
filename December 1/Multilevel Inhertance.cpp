//
//  main.cpp
//  MULTILEVEL.cpp
//
//  Created by MD AMANULLAH on 26/12/21.

#include<iostream>
using namespace std;
class bank
{
    protected:
    string bank_name;
    string coustomer_name;
    double mobile_no;
    string branch_name;
    void set_details()
    {
    cout<<"BANK NAME";
    getline(cin,bank_name);
    cout<<"Enter coustomer name ";
    getline(cin,coustomer_name);
    cout<<"Enter mobile number ";
    cin>>mobile_no;
    cin.ignore();
    cout<<"Enter branch name ";
    getline(cin,branch_name);

    }
    void get_details()
    {
        cout<<bank_name<<endl;
        cout<<coustomer_name<<endl;
        cout<<mobile_no<<endl;
        cout<<branch_name<<endl;
    }
};
class Account :public bank
{
    protected:
  int a;
  int tamount=0;
  void deposit()
  {
      cout<<"Enter your deposit amount ";
      cin>>a;
      tamount=tamount+a;
  }
  void withdrawl()
  {
      cout<<"enter the Withdrawl amount ";
      cin>>a;
      tamount=tamount-a;
  }
  void display()
  {
      
      set_details();
      deposit();
      withdrawl();

  }
    void display_2()
    {
        get_details();
    }
};
class saving :public Account
{
    public:
    int intrest;
    int total_amount;
    void cal()
    {
        intrest = tamount*(4.5/100);
        cout<<"INtrest amount "<<intrest<<endl;
        total_amount= tamount+intrest;
        cout<<"amount = "<<total_amount<<endl;
    }
    void show()
    {
        display();
        display_2();
        cal();
    }
};
int main()
{
    saving obj;
    obj.show();
}

