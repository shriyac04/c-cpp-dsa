#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
int a,b;
cout<<"enter the 1st number (a): ";
cin>>a;
cout<<"enter the 2nd number (b): ";
cin>>b;
int *p1=&a;
int *p2=&b;
//without using a 3rd variable
/*
*p1=*p1+ *p2;
*p2=*p1-*p2;
*p1=*p1-*p2;
cout<<"after swapping 'a' is: "<<*p1;
cout<<" and 'b' is: "<<*p2;

*/
//using a 3rd variable
int *p3=p2;
p2=p1;
p1=p3;

cout<<"after swapping 'a' is: "<<*p1;
cout<<" and 'b' is: "<<*p2;


}

