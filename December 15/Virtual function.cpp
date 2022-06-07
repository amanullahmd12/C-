//
//  main.cpp
//  15 DEC.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//

#include<iostream>
using namespace std;

class shape
{
    protected:
    double x;
    double y;
    public:
    void set_data()
    {
        
        cout<<"Enter length " ;
        cin>>x;
        cout<<"Enter bredth ";
        cin>>y;

    }
    virtual void area()=0;

};
class rectangle:public shape
{
    public:
    void area()
     {
       cout<<"Area of rectangle = "<<x*y<<endl;
     }


};
class triangle:public shape
{
    public:
     void area()
     {
         
         cout<<"area triangle of ="<< (x*y)/2<<endl;
     }



};
int main()
{
    rectangle r;
    triangle t;
    r.set_data();
    r.area();
    t.set_data();
    t.area();

}
