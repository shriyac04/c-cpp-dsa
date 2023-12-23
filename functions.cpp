#include <iostream>
#include<string>
#include <cmath>
using namespace std;
void fun(){
static int i=0; //static variable once changed cannot be turned back to zero
//static variable stores the value once given until the next function call
//scope remains till the function
int j=0;
i++;
j++;
cout<<"i="<<i<<" and j="<<j<<endl;
}
int main(){
fun();
fun();
fun();
fun();
}
