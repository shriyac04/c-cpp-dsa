#include <bits/stdc++.h>
using namespace std;
class employee{
public:
    int id;
    string name;
    float salary;
    employee(int i,string n,float s){
    id=i;
    name=n;
    salary=s;
    }
    ~employee(){
    cout<<"destructor called for employee: "<< name <<endl;
        }
    void display(){

    cout<<id<<" "<<name<<" "<<salary;
    }
} ;
int main(){
    int id,salary;
    string name;

    cout<<"enter the id no: ";
    cin>>id;
    cin.ignore();
    cout<<"enter the name: ";
    getline(cin,name);
    cout<<"enter the salary: ";
    cin>>salary;

    employee e1(id,name,salary);
    e1.display();
    cout<<endl;
    return 0;

}
