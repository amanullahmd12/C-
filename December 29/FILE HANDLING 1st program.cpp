include<iostream>
#include<fstream>
using namespace std;

int main()
 {
  ofstream outfile ;
  outfile.open("Student ");
  char a[20];
  int age;
  cout<<"\n Name ";
  cin>>a;
  outfile<<a;
  cout<<"\n age";
  cin>>age;
  outfile<<age;
  outfile.close();

  ifstream infile;
  infile.open("Student");

  ofstream outfile1;
  outfile1.open("copy");
  char ch;
  ch=infile.get();
