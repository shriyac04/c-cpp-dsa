#include <iostream>
using namespace std;
int main()
{
 int a[]={1,2,3,4,5}; // array initialization
  int *ptr;  // pointer declaration
  ptr=a; //assigning base address to pointer ptr.
  cout<<"The value of *ptr is :"<<*ptr;
  ptr=ptr+1;  // incrementing the value of ptr by 1.
  std::cout << "\nThe value of *ptr is: " <<*ptr<< std::endl;
  return 0;
}
