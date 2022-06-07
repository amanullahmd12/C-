//
//  main.cpp
//  exeptional handling.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//

//Write a  program to calculate a pay computaion to give the employee 1.5 times hourley rate per hour work above 40 hours using try and catch.
#include<iostream>
using namespace std;

string name ;
 int age;
 int working_hour;
void employee()
{
 cout<<"Enter Name of Employee :"<<endl;
 cin>>name;
    fflush(stdin);
 cout<<" Enter Age of Employee : "<<endl;
 cin>>age;
}
void calculation()
{
    float rate_hour;
    cout<<"Enter the Working Hour of Employee : "<<endl;
    cin>>working_hour;
    try
    {
        if(working_hour>40)
            {
            throw working_hour ;
        }
        else
        {
            rate_hour = working_hour*200;
        }
    }
       catch (int e)
        {
            rate_hour = working_hour *200+(working_hour*200)*1.5/100;
        }

    cout<<"Employee Amount :"<<rate_hour<<endl;
}
int main()
{
    int n=2;
    for (int i=0;i<n;i++)
    {
    employee();
    calculation();
    }
}
