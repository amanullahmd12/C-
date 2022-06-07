//
//  main.cpp
//  real root identifier.cpp
//
//  Created by MD AMANULLAH on 05/12/21.
//

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a=0.00f;
    float b=0.00f;
    float c=0.00f;
    float d=0.00f;
    float root_1=0.00f;
    float root_2=0.00f;
    cout<<"Enter value of a"<<endl;
    cin>>a;
    cout<<"Enter value of b"<<endl;
    cin>>b;
    cout<<"Enter value of c"<<endl;
    cin>>c;
    d=sqrt(pow(b,2)-(4*a*c));
    if(d>=0)
    {
        cout<<"ITS A REAL ROOT \n";
        root_1=(-b+d)/(2*a);
        root_2=(-b-d)/(2*a);
        
        cout<<"Root = "<<root_1<<endl;
        cout<<"Root = "<<root_2<<endl;
    }
    else
    {
        cout<<"its not real root \n";
    }
}
