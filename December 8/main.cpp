//
//  main.cpp
//  8_DECEMBER.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//

#include <iostream>
using namespace std;
class student{
protected:
    string name;
    int id;
public:
    student()
    {
        cout<<"ENTER NAME"<<endl;
        getline(cin>>ws,name);
        cout<<"ENTER id"<<endl;
        cin>>id;

    }
    void display()
    {
        cout<<name<<endl;
        cout<<id<<endl;
    }
};

class marks: virtual public student{
    int m1,m2,m3;
public:
    void set_marks()
    {
        cout<<"ENTER MARKS: "<<endl;
        cout<<"Marks 1 : "<<endl;
        cin>>m1;
        cout<<"Marks 2 : "<<endl;
        cin>>m2;
        cout<<"Marks 3 : "<<endl;
        cin>>m3;
        
    }
    void display_marks()
    {

        cout<<"Marks 1 : "<<m1<<endl<<"Marks 2 : "<<m2<<endl<<"Marks 3 : "<<m3<<endl;
    }
};

class sports: virtual public student
{
    int s_marks;
    public:
        void set_smarks()
        {
            cout<<"ENTER Sports Marks"<<endl;
            cin>>s_marks;
        }
        void display_smarks()
        {
            cout<<s_marks<<endl;
        }
};

class result:public marks,public sports
{
public:
    result(){
     //get();
    set_marks();
    set_smarks();
    }

    void show()
    {
        display();
    display_marks();
    display_smarks();

    }
};

int main()
{
    result r;
    r.show();



    return 0;
}
