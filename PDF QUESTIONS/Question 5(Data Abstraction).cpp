//
//  main.cpp
//  Data Abstraction.cpp
//
//  Created by MD AMANULLAH on 26/12/21.
//

#include <iostream>
using namespace std;

class Add
{
private:
    int a=0;
    int b=0;
public:
    Add()
    {
        int x , y;
        cout<<"Enter 1st Value ";
        cin>>x;
        cout<<"Enter 2nd Value ";
        cin>>y;
        a=x;
        b=y;
        cout<<"Sum = "<< a+b<<endl;
    }
};

int main()
{
    Add();

}
