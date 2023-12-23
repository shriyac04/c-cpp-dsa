#include <bits/stdc++.h>
using namespace std;
class b{
public:
    virtual void display(){
    cout<<"In base class\n ";
    }
    void show(){
    cout<<"I'm in base class\n";
    }
};
class d:public b{
    public:
void display(){
cout<<"in derived class\n";   //as display() is a virtual function, therefore the function has been overriden
}
void show(){
cout<<"i'm in derived class\n";
}
};
int main(){
b*ptr;
d obj;
ptr=&obj;
ptr->display(); // scope resolution should be used in order to call display() of base class
ptr->show(); // here the pointer is of bass class and it points to the derived class , therefore the show () of base class is called
return 0;
}
