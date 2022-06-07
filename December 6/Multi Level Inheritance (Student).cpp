//
//  main.cpp
//  multi level inheritance.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//
#include<iostream>
using namespace std;
class student
{
    public:
    int age;
    string name;
    double enroll_no;
    int marks;
    void get_student_details()
    {
        cout<<"Enter student name ";
        getline(cin,name);
        cout<<"Enter student age ";
        cin>>age;
        cout<<"Enter Enrollment no.";
        cin>>enroll_no;
        cout<<"enter marks ";
        cin>>marks;
    }
    void set_student_details()
    {
        cout<<"Student Details : "<<endl;
        cout<<"Student Name "<<name<<endl;
        cout<<"Student Age "<<age<<endl;
        cout<<"Student Enrollment no."<<enroll_no<<endl;
        cout<<"Student Marks "<<marks<<endl;
        cin.ignore();
    }
    void display()
    {
        get_student_details();
        set_student_details();
    }
};
class faculty
{
public:
    string faculty_name;
    int faculty_code;
    int salary;
    string department;
    int age;
    int experience;
    char gender;
    void get_faculty_details()
    {
        cout<<"Enter Faculty Name ";
        getline(cin,faculty_name);
        fflush(stdin);
        cout<<"Enter faculty code ";
        cin>>faculty_code;
        fflush(stdin);
        cout<<"Enter Faculty Salary ";
        cin>>salary;
        fflush(stdin);
        cout<<"Enter Faculty Department ";
        getline(cin,department);
        fflush(stdin);
        cout<<"Enter Faculty age ";
        cin>>age;
        fflush(stdin);
        cout<<"Enter Faculty Experience ";
        cin>>experience;
        fflush(stdin);
        cout<<"Enter Faculty gender ";
        cin>>gender;

    }
    void set_faculty_details()
    {
        cout<<endl;
        cout<<" FACULTY DETAILS:\n";
        cout<<"Faculty Name "<<faculty_name<<endl;
        cout<<"Faculty Code "<<faculty_code<<endl;
        cout<<"Faculty salary "<< salary<<endl;
        cout<<"Faculty Age "<<age<<endl;
        cout<<"FaCULTY Experience "<<experience<<endl;
        cout<<"faculty Gender "<<gender<<endl;

    }
    void display()
    {
        get_faculty_details();
        set_faculty_details();
    }
};

class person: public student,public faculty
{
public:

    void show()
    {
     student::display();
     faculty::display();
    }
};
int main()
{
    person obj;
    obj.show();
}
