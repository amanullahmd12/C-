//
//  main.cpp
//  Function overloding.cpp
//
//  Created by MD AMANULLAH on 24/12/21.
//

#include <iostream>
using namespace std;
int area;
void calculate_area(int side)
{
    area=side*side;
    cout<<"area of square "<<area<<endl;
}
void calculate_area(int length , int bredth)
{
    area = length * bredth;
    cout<<"area of rectangle "<<area<<endl;
}
void calculate_area(float base ,float height )
{
    area = (base*height)/2;
    cout<<"area of triangle "<<area<<endl;
}
int main()
{
    int a=5;
    int b=4;
    float c=25.08f;
    float d=66.8f;
    calculate_area(a);
    calculate_area(a,b);
    calculate_area(c,d);
}
