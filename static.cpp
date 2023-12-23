#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int car_id;
    string car_name; // Use string instead of char array
    int marks;

public:
    static int static_member;

    Car() {
        static_member++;

            }
static int fun(){
static_member+=2;
}
    void inp() {
        cout << "Enter the Id of the Car: " << endl;
        cin >> car_id;
        cout << "Enter the name of the Car: " << endl;
        cin.ignore(); // Clear the newline character in the input buffer
        getline(cin, car_name);
        cout << "Number of the Marks (1 - 10): " << endl;
        cin >> marks;
    }

    void disp() {
        cout << "\nId of the Car: " << car_id;
        cout << "\nName of the Car: " << car_name;
        cout << "\nMarks: " << marks;
    }
};

int Car::static_member = 0;

int main() {
    Car c1;
    c1.inp();
    c1.disp();
    cout<<endl;
cout<<endl;
    Car c2;
    c2.inp();
    c2.disp();
cout<<endl;
    cout << "\nNo. of objects created in the class: " << Car::static_member << endl;
    cout << "\nthe value is: " << Car::fun() << endl;


    return 0;
}


