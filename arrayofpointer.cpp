#include <iostream>
//basic
using namespace std;
int main()
{
    int *ptr;  // integer pointer declaration
    int marks[5]; // marks array declaration
    cout << "Enter the elements of an array :" << endl;
    for(int i=0;i<10;i++)
    {
        cin>>marks[i];
    }
    ptr=marks;
    ptr=ptr+1; // both marks and ptr pointing to the same element..
    cout << "The value of *ptr is :" <<*ptr<< endl;
    cout << "The value of marks is :" <<marks<<endl;
}
