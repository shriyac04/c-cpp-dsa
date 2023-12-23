#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int add(int a,int b){
return a+b;
}
int main(){
    int a,b;
    int(*fun)(int,int);
    fun=add;
    cout<<"enter the 1st number: ";
    cin>>a;
    cout<<"enter the 2nd number: ";
    cin>>b;
    int sum=fun(a,b);
    cout<<"the sum of the given two numbers is : "<<sum;

}
