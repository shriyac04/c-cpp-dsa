#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
string food="pizza";
string *ptr=&food;
cout<<ptr<<endl;
//pointer is a variable that stores the memory address as its value.
cout<<*ptr<<endl;
*ptr="hamburger";
cout<<&ptr<<endl;//pointer's address is different whereas it stores address of different variable.
cout<<*ptr<<endl;
int *ptr1=0;
cout<<*ptr1<<endl;
int *ptr2= NULL;
cout<<*ptr;
string** ptr3;
ptr3= &ptr;
cout<< (**ptr3);

}
