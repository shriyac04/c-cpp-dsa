#include <bits/stdc++.h>
//outside the class
//using factory method
using namespace std;
class s{
int rno;
string name;
int fee;
public:
    s();
    void display();
    };
s::s(){
    cout<<"enter the roll no: ";
    cin>>rno;
    cout<<"enter student's name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"enter the fee: ";
    cin>>fee;
}
void s::display(){
cout<<rno<<"\t"<<name<<"\t"<<fee;
}
int main(){
s student;
student.display();
return 0;
}
