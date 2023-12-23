#include <bits/stdc++.h>
//constructors outside the class
using namespace std;
class student{
    int rno;
    string name;
    double fee;

public:
    student();
    void display();

};
student::student(){
cout<<"enter the roll.no: ";
cin>>rno;
cout<<"enter the name: ";
cin.ignore();
getline(cin,name);
cout<<"enter the fee: ";
cin>>fee;
}
void student::display(){
cout<<endl<<rno<<"\t"<<name<<"\t"<<fee;
}
int main(){
student s;
s.display();
return 0;
}
