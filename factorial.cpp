#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int factorial(int n){
if(n<0)
    return(-1);
if(n==0)
    return(1);
else{

    return(n*factorial(n-1));
}
}
int main(){
    int fact,value;
    cout<<"enter the number: ";
    cin>>value;
    fact=factorial(value);
    cout<<"the factorial of the given number: "<<fact;


}
