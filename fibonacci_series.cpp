#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int fib(int n){
if(n<0)
    return(-1);
if(n==0)
    return 0;
    if(n==1||n==2)
        return 1;

else{
    return(fib(n-1)+fib(n-2));
}

}

int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    cout<<"the fibonacci series of the given number is : ";
    for(int i=0;i<n;i++){

        cout<<fib(i)<<" ";

    }


}
