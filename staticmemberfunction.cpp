#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class abc{
static int num;

public:
    static string fun(){
        cout<<"this is heheheh";

    }

};
int abc :: num = 5;

int main ()
{
// access static member function using the class name and the scope resolution
cout << " The value is: " << abc:: fun() << endl;
return 0;
}
