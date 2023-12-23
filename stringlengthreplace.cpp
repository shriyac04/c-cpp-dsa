/* this program firstly ask for data then it counts the length. Afterwards it changes the string character */
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
cout<<first<<endl;
cout<<"this is just a sample data to test \'"<<endl;
cout<<"this is \"shriya\"";
cout<<"this is \"shriya\"\n";
cout<<"this is \"shriya\"\\";
}
