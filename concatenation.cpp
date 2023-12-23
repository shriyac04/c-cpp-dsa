#include <iostream>
#include <string>
using namespace std;
int main(){
string first;
cout<<"enter the first name: ";
cin>>first;
string last;
cout<<"enter the last name: ";
cin>>last;
//cout<<first+last;
/*string fullname=first + " " + last;
cout<<fullname;*/
string fullname=first.append(last);
cout<<fullname;
}
