//
//  main.cpp
//  1st dec.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//

//
//  main.cpp
//  INHERITANCE.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//

#include <iostream>

#include<iostream>
using namespace std;
class student
{
public:

    string name;
        int age;
        double Enroll_no; //ENROLLMENT NO'
        int marks;
        void setdetails()
        {
         cout<<"Enter student name"<<endl;
            cin.ignore();
         getline(cin,name);
        
        cout<<"Enter age"<<endl;
            cin>>age;
         
         cout<<"Enter ENROLLMENT NO."<<endl;
         cin>>Enroll_no;
  
         cout<<"Enter Marks "<<endl;
         cin>>marks;
        }
        void getdetails()
        {
            cout<<"Student name "<<name<<endl;
            cout<<"Student age "<<age<<endl;
            cout<<"Enrollment no. "<<Enroll_no<<endl;
            cout<<"Marks "<<marks<<endl;
        }
        
      
};
class exam :public student
{
    public:
    string exam_name;
    int exam_code;
    void setdata()
    {
     cout<<"enter exam name \n";
     cin>>exam_name;
     cout<<"Enter exam code \n";
     cin>>exam_code;
    }
    void getdata()
    {
        cout<<"Exam name "<<exam_name<<endl;
        cout<<"Exam code "<<exam_code<<endl;
    }
    void show()
    {

        setdetails();
        setdata();

    }
    void display()
    {
        getdetails();
        getdata();
    }
};
 int main()
 {
     int n;
     cout<<"Enter Number of Student : "<<endl;
     cin>>n;
     exam obj[n];
     for(int i=0;i<n;i++)
     {
         cout<<"NO. OF STUDENTS "<<i+1<<endl;
         obj[i].show();
         cin.ignore();
     }
     
     for(int i=0;i<n;i++)
         {
             obj[i].display();
     }
    
 }

