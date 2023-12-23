#include <bits/stdc++.h>
//inside the class
using namespace std;
class s{
int rno;
string name;
double fee;
public:
    s(){
    cout<<"enter the roll no: ";
    cin>>rno;
    cout<<"enter the student's name: ";
    cin.ignore();
    getline(cin,name);
    cout<<"enter the fee : ";
    cin>>fee;
    }
    void display(){
    cout<<rno<<"\t"<<name<<"\t"<<fee;

    }
};

int main(){
s student;
student.display();
return 0;
}
