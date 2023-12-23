#include <bits/stdc++.h>
using namespace std;

class student {
    int rno;
    //char name[50];
    string name;
    double fee;

public:
    student() {
        cout << "Enter the RollNo: ";
        cin >> rno;

        cout << "Enter the Name: ";
        cin.ignore(); // To handle newline character in the input buffer
      //  cin.getline(name, 50); // Using cin.getline() to read the name //cin.getline(<variable>,<size>) //for char


        cout << "Enter the Fee: ";
        cin >> fee;
    }

    void display() {
        cout << endl << "Roll No: " << rno << "\nName: " << name << "\nFee: " << fee << endl;
    }
};

int main() {
    student s; // constructor gets called automatically when
               // we create the object of the class
    s.display();

    return 0;
}
