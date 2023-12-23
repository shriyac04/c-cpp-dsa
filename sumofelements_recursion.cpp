#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int sum(int n){
if(n<0)
    return(-1);
if(n==0)
    return 0;

else{
    return(n+sum(n-1));
}

}

int main(){
    int n,summ;
    cout<<"enter the number: ";
    cin>>n;
    summ=sum(n);
cout<<"the sum of 'n' natural numbers is: "<<summ;


}
