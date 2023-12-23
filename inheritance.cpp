#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class vehicle{  //base class
public :
    string brand;
    void honk(){
    cout<<"brooommmm"<<"\n";

    }

};

class car : public vehicle{   // derived class
    public:
string model;
void set(string s,string t){

    brand=s;
    model=t;
    }

    void display(){
    cout<<"the brand is  "<<brand<<" and model is "<<model;
    }

};

int main(){
string a,b;
cout<<"enter the brand of the car: ";
getline(cin,a);
cout<<"enter the model of the brand : ";
getline(cin,b);
car mycar;
mycar.set(a,b);
mycar.display();
return 0;
}
