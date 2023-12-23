#include <iostream>
#include <string>
using namespace std;
int main(){
string first;
cout<<"enter data: ";
cin>>first;
int len= first.size();
cout<<len<<endl;
cout<<"enter the char: ";
char i;
cin>>i;
first[1]= i;
cout<<first;
}
