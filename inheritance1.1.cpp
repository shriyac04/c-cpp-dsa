#include <bits/stdc++.h>
using namespace std;
class person{
int id;
char name[100];
public:
    void set_p(){
    cout<<"enter the id: ";
    cin>>id;
    cout<<"enter the name: ";
    cin>>name;

    }
    void display(){
     cout<<endl<<"id: "<<id<<"\nname: "<<name<<endl;
    }
};
class student: private person{
    char course[50];
    int fee;
public:
    void set_s(){
    set_p();
    cout<<"enter the course name: ";
    cin>>course;
    cout<<"enter the course fee: ";
    cin>> fee;
    }
    void displays(){
        display();
    cout<<"course: "<<course<<"\nfee: "<<fee<<endl;
    }
  };

int main(){
student s;
s.set_s();
s.displays();
}
