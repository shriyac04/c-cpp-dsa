#include <iostream>
#include <string>
#include <cmath>
//accessing private class members
using namespace std;
class employee{
private:
    int salary;
public:
    void set(int s){

    salary=s;
    }

    void display(){
    cout<<"the salary of the employee is : "<<salary;

    }
};

int main(){

employee m;
m.set(10000);
m.display();
return 0;

}
