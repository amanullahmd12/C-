//
//  main.cpp
//  ToolBooth.cpp
//
//  Created by MD AMANULLAH on 29/11/21.
// Imagine a TollBooth with class TollBooth.The two data items are of type unsigned int and double to hold the total number of cars and total amount of money collected.A constructor initialises both of These data members to 0.A member function called payingcart() increments the car total and adds 0.5 to the cash total another function called nonpayCart() increments the car total but adds nothing to the cash total.
 //Finally a member function called Display()shows the two totals.Include a program to test this class.This program should allow the user to push one key to count a paying car, and another to count a non paying car.
 

#include <iostream>
using namespace std;

class TollBooth
{
public:
    int total_no_of_cars;
    double total_amount_of_money ;
  TollBooth()
    {
      total_no_of_cars=0;
      total_amount_of_money=0;
    }
    void Paying_car()
    {
        total_no_of_cars = total_no_of_cars+1;
        total_amount_of_money = total_amount_of_money + 0.5;
    }
    void Non_Paying_Car()
    {
        total_no_of_cars = total_no_of_cars+1;
    }
    void Display()
    {
        cout<<"Total no. of cars  "<<total_no_of_cars<<endl;
        cout<<"Total amount of money "<<total_amount_of_money<<endl;
    }
    
};
int main()
{
    TollBooth obj;
    int a, PC=0 , NPC=0;
    cout<<"Select Your option \n 1. For PAYING CAR \n 2. For non paying cars  "<<endl;
    
    do
    {
        cout<<"Enter your value ";
        cin>>a;
        if(a==1)
        {
            PC++;
            obj.Paying_car();
            obj.Display();
            cout<<"No. of cars = "<<PC<<endl;
        }
        else if (a==2)
        {
            NPC++;
            obj.Non_Paying_Car();
            obj.Display();
            cout<<"No. of cars = "<<NPC<<endl;
        }
        else
        {
            cout<<"invalid choice"<<endl;
            break;
        }

    } while(a);
    return 0;
}

        
        

