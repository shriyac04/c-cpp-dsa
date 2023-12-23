#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class abc {
public:
    static int a;
    static int b;
    static int c;

public:
    static void disp() {
        cout << "the value of a: " << a << endl;
        cout << "the value of b: " << b << endl;
        cout << "the value of c: " << c << endl;
    }
};

int abc::a = 0; // Initialize static members
int abc::b = 0;
int abc::c = 0;

int main() {
    int x, y, z;
    cout << "enter the value of 'a': ";
    cin >> x;
    abc::a = x;

    cout << "enter the value of 'b': ";
    cin >> y;
    abc::b = y;

    cout << "enter the value of 'c': ";
    cin >> z;
    abc::c = z;

    abc m;
    cout << "print the static member through object name : " << endl;
    m.disp();

    cout << "print the static member through class name: "<<endl;
    abc::disp();

    return 0;
}
