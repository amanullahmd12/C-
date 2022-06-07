//
//  main.cpp
//  invoice.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//


#include <iostream>
using namespace std;

class invoice
{
    string part_Number;
    string part_Description;
    int quantity ;
    double price_per_item;
public:
    invoice()
    {
        set_part_number();
        set_part_description();
        set_quantity();
        set_price_per_item();
        get_part_number();
        get_part_description();
        get_quantity();
        get_price_per_item();
        get_Invioce_Amount();
    }

     void set_part_number()
    {
        cout<<"Enter Part number : ";
        cin>>part_Number;
    }
    void get_part_number()
    {
        cout<<"Part Number : "<<part_Number<<endl;
    }

    void set_part_description()
    {
        cout<<"Enter Part Despcription : ";
        cin>>part_Description;
    }
    
    void get_part_description()
    {
        cout<<"Enter Part Despcription : "<<part_Description<<endl;

    }
    void set_quantity()
    {
        cout<<"Enter Quantity Of Products : ";
        cin>>quantity;
        if(quantity<0)
        {
            quantity=0;
        }
     
    }
    void get_quantity()
    
    {
        cout<<"Quantity : "<<quantity<<endl;
    }
  void set_price_per_item()
    {
      cout<<"Enter Price of Item : ";
      cin>>price_per_item;
        if(price_per_item<0)
        {
            price_per_item=0.00;
        }
    }
    void get_price_per_item()
    {
        cout<<"Price : "<<price_per_item<<endl;
    }
    void get_Invioce_Amount()
    {
        double amount =quantity*price_per_item;
        cout<<"Invoice Amount : "<<amount<<endl;
    }
    
};
    int main()
    {
        invoice obj;
        obj.set_part_number();
        obj.set_part_description();
        obj.set_quantity();
        obj.set_price_per_item();
        obj.get_part_number();
        obj.get_part_description();
        obj.get_quantity();
        obj.get_price_per_item();
        obj.get_Invioce_Amount();
    }
